################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/test2_1.cpp 

LINKER_SCRIPT += \
../src/linker_script.ld 

C_SRCS += \
../src/VFD.c 

CREF += \
test2_1_G22_VFDclock.cref 

C_DEPS += \
./src/VFD.d 

OBJS += \
./src/VFD.o \
./src/test2_1.o 

MAP += \
test2_1_G22_VFDclock.map 

CPP_DEPS += \
./src/test2_1.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-Os -ffunction-sections -fdata-sections -fdiagnostics-parseable-fixits -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -g -mcpu=s3 -std=gnu99 -fstack-size-section -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\all" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_config" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_pincfg" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\general" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_PORT" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_UART1" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_RTC" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22\\register_access\\llvm" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\board\\generic_rl78_g22" -DCPPAPP -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" "$<" -c -o "$@")
	@clang --target=rl78 @"$@.in"
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	$(file > $@.in,-Os -ffunction-sections -fdata-sections -fdiagnostics-parseable-fixits -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -g -mcpu=s3 -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\all" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_config" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_pincfg" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\general" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_PORT" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_UART1" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_RTC" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22\\register_access\\llvm" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\board\\generic_rl78_g22" -DCPPAPP -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" "$<" -c -o "$@")
	@clang++ --target=rl78 @"$@.in"

