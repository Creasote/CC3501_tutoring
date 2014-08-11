/* ###################################################################
**     Filename    : main.c
**     Project     : Lab03
**     Processor   : MK20DX128VLH5
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-08-07, 19:01, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "CsIO1.h"
#include "IO1.h"
#include "WAIT1.h"
#include "PWMblue.h"
#include "PwmLdd1.h"
#include "TU2.h"
#include "PWMred.h"
#include "PwmLdd2.h"
#include "PWMgreen.h"
#include "PwmLdd3.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
#include "stdio.h"
/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
uint8 counter;
char recd[10];
recd[0] = 0;
uint16 redVal;
uint16 greenVal;
uint16 blueVal;

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
redVal = 1;
greenVal = 1;
blueVal = 1;
  
for(;;){
	PWMred_SetRatio8(redVal-1);   // Red PTC3
	PWMgreen_SetRatio8(greenVal-1); // Green PTD4
	PWMblue_SetRatio8(blueVal-1);  // Blue PTA2
	scanf("%s", recd);
	if (strcmp(recd, "red") == 0){
		printf("red\r\n");
		
		if (redVal < 100){
			for (redVal = 1; redVal < 256; redVal++){
				PWMred_SetRatio8(redVal-1);   // Red PTC3
				WAIT1_Waitms(redVal/16);
			}
			printf("Red on.\r\n");
			redVal = 256;
		}
		
		else { //  (redVal > 100)
			for (redVal = 256; redVal > 0; redVal--){
				PWMred_SetRatio8(redVal-1);   // Red PTC3
				WAIT1_Waitms((256-redVal)/16);
			}
			printf("Red off.\r\n");
			redVal = 1;
		}
		
	}
	else if (strcmp(recd, "blue") == 0) {
		if (blueVal < 100){
			for (blueVal = 1; blueVal < 256; blueVal++){
				PWMblue_SetRatio8(blueVal-1);   // Blue PTA2
				WAIT1_Waitms(blueVal/16);
			}
		printf("Blue on.\r\n");
		blueVal = 256;
		}
	
		else { //  (blueVal > 100)
			for (blueVal = 256; blueVal > 0; blueVal--){
				PWMblue_SetRatio8(blueVal-1);   // Blue PTA2
				WAIT1_Waitms((256-blueVal)/16);
			}
			printf("Blue off.\r\n");
			blueVal = 1;
		}

	}

	else if (strcmp(recd, "green") == 0) {
		if (greenVal < 100){
			for (greenVal = 1; greenVal < 256; greenVal++){
				PWMgreen_SetRatio8(greenVal-1);   // Green PTD4
				WAIT1_Waitms(greenVal/16);
			}
			printf("Green on.\r\n");
			greenVal = 256;
		}
	
		else { //  (greenVal > 100)
			for (greenVal = 256; greenVal > 0; greenVal--){
				PWMgreen_SetRatio8(greenVal-1);   // Green PTD4
				WAIT1_Waitms((256-greenVal)/16);
			}
			printf("Green off.\r\n");
			greenVal = 1;
		}

	}
	
	
	printf(">>\r\n");
	
}
  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
