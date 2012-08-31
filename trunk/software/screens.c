///////////////////////////////////////////////////////////
//
// Screen Manager
//
// 21.08.2012 - Michael Schwarz
//
///////////////////////////////////////////////////////////

#include "screens.h"

GLCDD_Font* fnt_screen_border;

int active_screen = SCREEN_END;
ScreenInfo* screens;

// ---------------------------------------------------------------------------
void Screen_Init(const uint8_t* font_border) { 
  // create border font
  fnt_screen_border = (GLCDD_Font*)malloc(sizeof(GLCDD_Font));
  fnt_screen_border->name = (uint8_t*)font_border;
  fnt_screen_border->color = 0;
  
  // initialize screen structure
  screens = (ScreenInfo*)malloc(sizeof(ScreenInfo) * SCREEN_END);
}

// ---------------------------------------------------------------------------
void Screen_Add(Screen id, ScreenFunc init_fnc, ScreenFunc draw_fnc, ScreenFunc exit_fnc) {
	screens[id].init_fnc = init_fnc;
	screens[id].draw_fnc = draw_fnc;
	screens[id].exit_fnc = exit_fnc;
	screens[id].last_update = 0;
	screens[id].refresh_timeout = -1;
}

// ---------------------------------------------------------------------------
void Screen_Cleanup() {
	free(screens);
	screens = NULL;
	free(fnt_screen_border);
	fnt_screen_border = NULL;
}

// ---------------------------------------------------------------------------
void Screen_Goto(Screen id) {
	if(active_screen != SCREEN_END) {
		// execute exit function of current screen
		if(screens[active_screen].exit_fnc != NULL) screens[active_screen].exit_fnc();
	}
	// execute init function of new screen
	if(screens[id].init_fnc != NULL) screens[id].init_fnc();
	// reset last update timer
	screens[id].last_update = 0;
	active_screen = id;
}

// ---------------------------------------------------------------------------
Screen Screen_GetActive() {
	return active_screen;
}

// ---------------------------------------------------------------------------
void Screen_Draw() {
	if(active_screen >= SCREEN_END) return;
	if(screens[active_screen].draw_fnc != NULL) {
		// if no refresh timeout or timeout passed, call drawing function of screen
		if(screens[active_screen].refresh_timeout == -1 || 
			(time(NULL) - screens[active_screen].last_update) >= screens[active_screen].refresh_timeout) {
			GLCDD_Clear();
			screens[active_screen].last_update = time(NULL);
			screens[active_screen].draw_fnc();
			GLCDD_Draw();
		}
	}
}

// ---------------------------------------------------------------------------
void Screen_ForceRedraw() {
	if(active_screen >= SCREEN_END) return;
	screens[active_screen].last_update = 0;
}

// ---------------------------------------------------------------------------
void Screen_SetRefreshTimeout(Screen id, int refresh_timeout) {
	if(id >= SCREEN_END) return;
	screens[id].refresh_timeout = refresh_timeout;
}

// ---------------------------------------------------------------------------
void Screen_DrawBorder(char* title) {
 GLCDD_Rectangle(0, 0, SCREEN_W, SCREEN_H, 0);
 GLCDD_Rectangle(0, 0, SCREEN_W, 7, 1);
 GLCDD_ClearPixel(0, 0);
 GLCDD_ClearPixel(SCREEN_W - 1, 0);
 GLCDD_ClearPixel(0, SCREEN_H - 1);
 GLCDD_ClearPixel(SCREEN_W - 1, SCREEN_H - 1);
 
 fnt_screen_border->color = 1;
 GLCDD_Rect r;
 r.x = SCREEN_W / 2 - GLCDD_StringWidth(fnt_screen_border, title) / 2;
 r.y = 0;
 r.w = SCREEN_W;
 r.h = -1;
 GLCDD_Print(fnt_screen_border, &r, title);
 fnt_screen_border->color = 0;
}


