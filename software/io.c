///////////////////////////////////////////////////////////
//
// IO Library (using IO Bridge)
//
// 20.08.2012 - Michael Schwarz
//
///////////////////////////////////////////////////////////

#include "io.h"

uint32_t IO_Value = 0;
uint8_t IO_wasChanged = 0;
uint8_t IO_Mode = 0; // 0=hardware, 1=sim
sigset_t intmask;  


// ---------------------------------------------------------------------------
void IO_Init() {
 if ((sigemptyset(&intmask) == -1) || (sigfillset(&intmask) == -1)){  
   printf("Failed to initialize the signal mask\r\n");  
   exit(0);
 }   
 
#ifndef SIMULATE 
 pinMode(IO_DATA, INPUT);
 pinMode(IO_CLOCK, OUTPUT);
#endif
}

// ---------------------------------------------------------------------------
uint32_t IO_readValues() {
  uint32_t val = 0;

  if(IO_Mode == 1) {
    FILE* f = fopen("io.sim", "r+");
    uint32_t zero = 0;
    if(f == NULL) {
	  val = 0;
	  printf("io error\r\n");
    } else {
	  ignore_result(fread(&val, sizeof(val), 1, f));
	  fseek(f, 0, SEEK_SET);
	  fwrite(&zero, sizeof(zero), 1, f);
	  fclose(f);
    }
  } else { 
#ifndef SIMULATE
    int i;
    // block signals
    sigprocmask(SIG_BLOCK, &intmask, NULL);
    
    for(i = 0; i < 24; i++) {
      int j, tmp;
      
      for(j = 0; j < IO_REPEAT; j++) {
	digitalWrite(IO_CLOCK, 1);
      }
      
      for(j = 0; j < IO_REPEAT; j++) {
	digitalWrite(IO_CLOCK, 0);
      }
      
      tmp = 0;
      for(j = 0; j < IO_REPEAT; j++) {
	if(digitalRead(IO_DATA)) {
	  tmp = 1;
	}
      }
      
      //val <<= 1;
      if(tmp) {
	//val |= 1;
	val |= 1 << i;
      }
    }
    // unblock signals
    sigprocmask(SIG_UNBLOCK, &intmask, NULL);
#endif
  }
  return val;
}


// ---------------------------------------------------------------------------
void IO_Get() {
  uint32_t old_io = IO_Value;
  IO_Value = IO_readValues();
  if(IO_Value != old_io) IO_wasChanged = 1;
}

// ---------------------------------------------------------------------------
uint8_t IO_HasChanged() {
  uint8_t ret = IO_wasChanged;
  IO_wasChanged = 0;
  return ret;
}

// ---------------------------------------------------------------------------
uint8_t IO_GetButton(uint8_t btn) {
  if(btn >= 8) return 0;
  uint8_t ret = (IO_Value & (1 << btn)) ? 1 : 0;
  IO_Value &=~(1 << btn);
  return ret;
}

// ---------------------------------------------------------------------------
uint8_t IO_GetButtonLong(uint8_t btn) {
  if(btn >= 8) return 0;
  uint8_t ret = (IO_Value & (1 << (btn + 8))) ? 1 : 0;
  IO_Value &=~(1 << (btn + 8));
  return ret;
}

// ---------------------------------------------------------------------------
int8_t IO_GetRotaryValue() {
  int8_t ret = (IO_Value >> 16) & 0xff;
  IO_Value &= 0x0000ffff;
  return ret;
}

// ---------------------------------------------------------------------------
void IO_SetSimulate(uint8_t sim) {
  IO_Mode = sim;
}
