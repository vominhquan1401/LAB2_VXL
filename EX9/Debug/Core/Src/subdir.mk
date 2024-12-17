################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/display7SEG.c \
../Core/Src/ex1.c \
../Core/Src/ex10.c \
../Core/Src/ex2.c \
../Core/Src/ex3.c \
../Core/Src/ex4.c \
../Core/Src/ex5.c \
../Core/Src/ex9.c \
../Core/Src/main.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/timer.c 

OBJS += \
./Core/Src/display7SEG.o \
./Core/Src/ex1.o \
./Core/Src/ex10.o \
./Core/Src/ex2.o \
./Core/Src/ex3.o \
./Core/Src/ex4.o \
./Core/Src/ex5.o \
./Core/Src/ex9.o \
./Core/Src/main.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/timer.o 

C_DEPS += \
./Core/Src/display7SEG.d \
./Core/Src/ex1.d \
./Core/Src/ex10.d \
./Core/Src/ex2.d \
./Core/Src/ex3.d \
./Core/Src/ex4.d \
./Core/Src/ex5.d \
./Core/Src/ex9.d \
./Core/Src/main.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/timer.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/display7SEG.cyclo ./Core/Src/display7SEG.d ./Core/Src/display7SEG.o ./Core/Src/display7SEG.su ./Core/Src/ex1.cyclo ./Core/Src/ex1.d ./Core/Src/ex1.o ./Core/Src/ex1.su ./Core/Src/ex10.cyclo ./Core/Src/ex10.d ./Core/Src/ex10.o ./Core/Src/ex10.su ./Core/Src/ex2.cyclo ./Core/Src/ex2.d ./Core/Src/ex2.o ./Core/Src/ex2.su ./Core/Src/ex3.cyclo ./Core/Src/ex3.d ./Core/Src/ex3.o ./Core/Src/ex3.su ./Core/Src/ex4.cyclo ./Core/Src/ex4.d ./Core/Src/ex4.o ./Core/Src/ex4.su ./Core/Src/ex5.cyclo ./Core/Src/ex5.d ./Core/Src/ex5.o ./Core/Src/ex5.su ./Core/Src/ex9.cyclo ./Core/Src/ex9.d ./Core/Src/ex9.o ./Core/Src/ex9.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/stm32f1xx_hal_msp.cyclo ./Core/Src/stm32f1xx_hal_msp.d ./Core/Src/stm32f1xx_hal_msp.o ./Core/Src/stm32f1xx_hal_msp.su ./Core/Src/stm32f1xx_it.cyclo ./Core/Src/stm32f1xx_it.d ./Core/Src/stm32f1xx_it.o ./Core/Src/stm32f1xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f1xx.cyclo ./Core/Src/system_stm32f1xx.d ./Core/Src/system_stm32f1xx.o ./Core/Src/system_stm32f1xx.su ./Core/Src/timer.cyclo ./Core/Src/timer.d ./Core/Src/timer.o ./Core/Src/timer.su

.PHONY: clean-Core-2f-Src

