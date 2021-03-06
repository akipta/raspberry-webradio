///////////////////////////////////////////////////////////////
//
//  Info screen (IP, USB, Version)
//
//  02.09.2012 - Michael Schwarz
//
/////////////////////////////////////////////////////////////// 

#include "screen_info.h"

// ---------------------------------------------------------------------------
void draw_Info() {
   Screen_DrawBorder(_lng(INFORMATION_TITLE)); 
   
   char buffer[32];
   int is_conn = IP_Get(buffer);
   long usb_size = 0;
   int usb_used = 0;
   int usb_conn = Disk_GetStat(USB_PATH, &usb_size, &usb_used);
   
   GLCDD_Rect r;
   r.x = 6;
   r.w = SCREEN_W - 12;
   r.h = -1;

   r.y = 14;
   GLCDD_Printf(fnt_dejavu_9, &r, "%s: %s", _lng(IP), is_conn ? buffer : _lng(NOT_AVAILABLE));
   
   sprintf(buffer, "%ldGB (%d%% %s)", usb_size, 100 - usb_used, _lng(FREE));
   r.y = 26;
   GLCDD_Printf(fnt_dejavu_9, &r, "%s: %s", _lng(USB), usb_conn ? buffer : _lng(NOT_CONNECTED));
   
   r.y = 38;
   GLCDD_Printf(fnt_dejavu_9, &r, "%s: %s", _lng(VERSION), FW_VERSION);
   
   GLCDD_RectRounded(SCREEN_W - 28, SCREEN_H - 14, 24, 10, 1);
   fnt_dejavu_9->color = 1;
   r.x = SCREEN_W - 21;
   r.y = SCREEN_H - 13;
   r.w = 12;
   r.h = -1;
   GLCDD_Print(fnt_dejavu_9, &r, _lng(OK));
   fnt_dejavu_9->color = 0;
}
 
