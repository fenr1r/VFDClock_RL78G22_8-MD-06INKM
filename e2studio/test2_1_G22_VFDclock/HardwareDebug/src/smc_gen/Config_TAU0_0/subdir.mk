################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/smc_gen/Config_TAU0_0/Config_TAU0_0.c \
../src/smc_gen/Config_TAU0_0/Config_TAU0_0_user.c 

CREF += \
test2_1.cref 

C_DEPS += \
./src/smc_gen/Config_TAU0_0/Config_TAU0_0.d \
./src/smc_gen/Config_TAU0_0/Config_TAU0_0_user.d 

OBJS += \
./src/smc_gen/Config_TAU0_0/Config_TAU0_0.o \
./src/smc_gen/Config_TAU0_0/Config_TAU0_0_user.o 

MAP += \
test2_1.map 


# Each subdirectory must supply rules for building sources it contributes
src/smc_gen/Config_TAU0_0/%.o: ../src/smc_gen/Config_TAU0_0/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-Os -ffunction-sections -fdata-sections -fdiagnostics-parseable-fixits -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -g -mcpu=s3 -std=gnu99 -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\r_bsp\\board\\generic_rl78_g23" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\r_bsp\\mcu\\rl78_g23\\register_access\\llvm" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\r_bsp\\mcu\\rl78_g23" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\r_bsp\\mcu\\all" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\r_config" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\r_pincfg" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\general" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\r_bsp" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\Config_PORT" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\Config_TAU0_0" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\Config_UART1" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\Config_RTC" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\Config_CSI20" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1\\src\\smc_gen\\Config_UARTA1" -DCPPAPP -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" "$<" -c -o "$@")
	@clang --target=rl78 @"$@.in"

