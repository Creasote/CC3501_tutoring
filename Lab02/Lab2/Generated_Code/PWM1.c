/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : PWM1.c
**     Project     : ProcessorExpert
**     Processor   : MK20DX128VLH5
**     Component   : PWM
**     Version     : Component 02.240, Driver 01.01, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-08-06, 00:40, # CodeGen: 14
**     Abstract    :
**         This component implements a pulse-width modulation generator
**         that generates signal with variable duty and fixed cycle. 
**     Settings    :
**         Used output pin             : 
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       46            |  CMP1_IN1/PTC3/LLWU_P7/SPI0_PCS1/UART1_RX/FTM0_CH2/CLKOUTa/I2S0_TX_BCLK
**             ----------------------------------------------------
**
**         Timer name                  : FTM0_CNT [16-bit]
**         Counter                     : FTM0_CNT  [0x40038004]
**         Mode register               : FTM0_SC   [0x40038000]
**         Run register                : FTM0_SC   [0x40038000]
**         Prescaler                   : FTM0_SC   [0x40038000]
**         Compare register            : FTM0_C2V  [0x40038020]
**         Flip-flop register          : FTM0_C2SC [0x4003801C]
**
**         User handling procedure     : not specified
**
**         Port name                   : PTC
**         Bit number (in port)        : 3
**         Bit mask of the port        : 0x0008
**         Port data register          : GPIOC_PDOR [0x400FF080]
**         Port control register       : GPIOC_PDDR [0x400FF094]
**
**         Initialization:
**              Output level           : low
**              Timer                  : Enabled
**              Event                  : Enabled
**         High speed mode
**             Prescaler               : divide-by-[driven by slave component]
**             Clock                   : [driven by slave component] Hz
**           Initial value of            period     pulse width
**             Xtal ticks              : ---        ---
**             microseconds            : ---        ---
**             milliseconds            : 5          1
**             seconds                 : ---        ---
**             seconds (real)          : 5          1
**
**     Contents    :
**         SetRatio16 - byte PWM1_SetRatio16(word Ratio);
**         SetDutyUS  - byte PWM1_SetDutyUS(word Time);
**         SetDutyMS  - byte PWM1_SetDutyMS(word Time);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file PWM1.c
** @version 01.01
** @brief
**         This component implements a pulse-width modulation generator
**         that generates signal with variable duty and fixed cycle. 
*/         
/*!
**  @addtogroup PWM1_module PWM1 module documentation
**  @{
*/         

/* MODULE PWM1. */

#include "PWM1.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Method      :  PWM1_SetRatio16 (component PWM)
**     Description :
**         This method sets a new duty-cycle ratio. Ratio is expressed
**         as a 16-bit unsigned integer number. 0 - FFFF value is
**         proportional to ratio 0 - 100%. The method is available
**         only if it is not selected list of predefined values in
**         <Starting pulse width> property. 
**         Note: Calculated duty depends on the timer possibilities and
**         on the selected period.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Ratio           - Ratio to set. 0 - 65535 value is
**                           proportional to ratio 0 - 100%
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
** ===================================================================
*/
/*
byte PWM1_SetRatio16(word Ratio)
**  This method is implemented as a macro. See PWM1.h file.  **
*/

/*
** ===================================================================
**     Method      :  PWM1_SetDutyUS (component PWM)
**     Description :
**         This method sets the new duty value of the output signal.
**         The duty is expressed in microseconds as a 16-bit
**         unsigned integer number.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Time            - Duty to set [in microseconds]
**                      (0 to --- us in high speed mode)
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
/*
byte PWM1_SetDutyUS(word Time)
**  This method is implemented as a macro. See PWM1.h file.  **
*/

/*
** ===================================================================
**     Method      :  PWM1_SetDutyMS (component PWM)
**     Description :
**         This method sets the new duty value of the output signal.
**         The duty is expressed in milliseconds as a 16-bit
**         unsigned integer number.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Time            - Duty to set [in milliseconds]
**                      (0 to 5 ms in high speed mode)
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
/*
byte PWM1_SetDutyMS(word Time)
**  This method is implemented as a macro. See PWM1.h file.  **
*/

/* END PWM1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
