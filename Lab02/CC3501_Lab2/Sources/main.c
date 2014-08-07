/* ###################################################################
**     Filename    : main.c
**     Project     : CC3501_Lab2
**     Processor   : MK20DX128VLH5
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-07-31, 14:39, # CodeGen: 0
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
#include "UART.h"
#include "ASerialLdd1.h"
#include "ADC.h"
#include "AdcLdd1.h"
#include "CsIO1.h"
#include "IO1.h"
#include "TU1.h"
#include "Green.h"
#include "PwmLdd2.h"
#include "Red.h"
#include "BitIoLdd1.h"
#include "Blue.h"
#include "BitIoLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  
  // Calibrate the ADC
  ADC_Calibrate(TRUE); // wait for the ADC calibration to complete

  // Read from the ADC and show the result on the Green LED
  uint16 adc_result;
  uint16 pwm_cycle;
  for (;;) {
	  ADC_Measure(TRUE); // wait for the ADC conversion to complete
	  
	  // Read the value
	  ADC_GetValue16(&adc_result);
	  
	  // Note:
	  // Brighter light means a lower ADC value.
	  // Full light is approx. 46000
	  // Covered is approx. full scale (64000)
	  
	  // Scale the result to get a nice PWM range
	  if (adc_result < 46000)
		  pwm_cycle = 0; // Full scale brightness
	  else if (adc_result > 64000)
		  pwm_cycle = 65535; // Full scale darkness
	  else
		  pwm_cycle = (adc_result - 46000) * 3.6408; // 65535/(64000 - 46000)

	  // Set the PWM duty cycle.
	  // The initial polarity is set to high, so a ratio of 0 (i.e. full light) means maximum brightness 
	  Green_SetRatio16(pwm_cycle);
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
