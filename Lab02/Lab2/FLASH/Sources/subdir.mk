################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Events.c" \
"../Sources/ProcessorExpert.c" \

C_SRCS += \
../Sources/Events.c \
../Sources/ProcessorExpert.c \

OBJS += \
./Sources/Events.o \
./Sources/ProcessorExpert.o \

C_DEPS += \
./Sources/Events.d \
./Sources/ProcessorExpert.d \

OBJS_QUOTED += \
"./Sources/Events.o" \
"./Sources/ProcessorExpert.o" \

C_DEPS_QUOTED += \
"./Sources/Events.d" \
"./Sources/ProcessorExpert.d" \

OBJS_OS_FORMAT += \
./Sources/Events.o \
./Sources/ProcessorExpert.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/Events.o: ../Sources/Events.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Events.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Events.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/ProcessorExpert.o: ../Sources/ProcessorExpert.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/ProcessorExpert.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/ProcessorExpert.o"
	@echo 'Finished building: $<'
	@echo ' '


