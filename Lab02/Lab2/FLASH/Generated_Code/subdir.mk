################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Generated_Code/AD2.c" \
"../Generated_Code/AdcLdd1.c" \
"../Generated_Code/BitIoLdd1.c" \
"../Generated_Code/Bluepin.c" \
"../Generated_Code/Cpu.c" \
"../Generated_Code/PE_LDD.c" \
"../Generated_Code/PWM1.c" \
"../Generated_Code/PwmLdd1.c" \
"../Generated_Code/TU1.c" \
"../Generated_Code/Vectors.c" \
"../Generated_Code/WAIT1.c" \

C_SRCS += \
../Generated_Code/AD2.c \
../Generated_Code/AdcLdd1.c \
../Generated_Code/BitIoLdd1.c \
../Generated_Code/Bluepin.c \
../Generated_Code/Cpu.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/PWM1.c \
../Generated_Code/PwmLdd1.c \
../Generated_Code/TU1.c \
../Generated_Code/Vectors.c \
../Generated_Code/WAIT1.c \

OBJS += \
./Generated_Code/AD2.o \
./Generated_Code/AdcLdd1.o \
./Generated_Code/BitIoLdd1.o \
./Generated_Code/Bluepin.o \
./Generated_Code/Cpu.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/PWM1.o \
./Generated_Code/PwmLdd1.o \
./Generated_Code/TU1.o \
./Generated_Code/Vectors.o \
./Generated_Code/WAIT1.o \

C_DEPS += \
./Generated_Code/AD2.d \
./Generated_Code/AdcLdd1.d \
./Generated_Code/BitIoLdd1.d \
./Generated_Code/Bluepin.d \
./Generated_Code/Cpu.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/PWM1.d \
./Generated_Code/PwmLdd1.d \
./Generated_Code/TU1.d \
./Generated_Code/Vectors.d \
./Generated_Code/WAIT1.d \

OBJS_QUOTED += \
"./Generated_Code/AD2.o" \
"./Generated_Code/AdcLdd1.o" \
"./Generated_Code/BitIoLdd1.o" \
"./Generated_Code/Bluepin.o" \
"./Generated_Code/Cpu.o" \
"./Generated_Code/PE_LDD.o" \
"./Generated_Code/PWM1.o" \
"./Generated_Code/PwmLdd1.o" \
"./Generated_Code/TU1.o" \
"./Generated_Code/Vectors.o" \
"./Generated_Code/WAIT1.o" \

C_DEPS_QUOTED += \
"./Generated_Code/AD2.d" \
"./Generated_Code/AdcLdd1.d" \
"./Generated_Code/BitIoLdd1.d" \
"./Generated_Code/Bluepin.d" \
"./Generated_Code/Cpu.d" \
"./Generated_Code/PE_LDD.d" \
"./Generated_Code/PWM1.d" \
"./Generated_Code/PwmLdd1.d" \
"./Generated_Code/TU1.d" \
"./Generated_Code/Vectors.d" \
"./Generated_Code/WAIT1.d" \

OBJS_OS_FORMAT += \
./Generated_Code/AD2.o \
./Generated_Code/AdcLdd1.o \
./Generated_Code/BitIoLdd1.o \
./Generated_Code/Bluepin.o \
./Generated_Code/Cpu.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/PWM1.o \
./Generated_Code/PwmLdd1.o \
./Generated_Code/TU1.o \
./Generated_Code/Vectors.o \
./Generated_Code/WAIT1.o \


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/AD2.o: ../Generated_Code/AD2.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/AD2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/AD2.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/AdcLdd1.o: ../Generated_Code/AdcLdd1.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/AdcLdd1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/AdcLdd1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/BitIoLdd1.o: ../Generated_Code/BitIoLdd1.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/BitIoLdd1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/BitIoLdd1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Bluepin.o: ../Generated_Code/Bluepin.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Bluepin.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Bluepin.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Cpu.o: ../Generated_Code/Cpu.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Cpu.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Cpu.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PE_LDD.o: ../Generated_Code/PE_LDD.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PE_LDD.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PE_LDD.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PWM1.o: ../Generated_Code/PWM1.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PWM1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PWM1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PwmLdd1.o: ../Generated_Code/PwmLdd1.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PwmLdd1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PwmLdd1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/TU1.o: ../Generated_Code/TU1.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/TU1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/TU1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Vectors.o: ../Generated_Code/Vectors.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Vectors.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Vectors.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/WAIT1.o: ../Generated_Code/WAIT1.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/WAIT1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/WAIT1.o"
	@echo 'Finished building: $<'
	@echo ' '


