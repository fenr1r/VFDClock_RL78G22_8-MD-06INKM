################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../src/smc_gen/r_bsp/mcu/all/r_bsp_common_llvm.asm 

S_UPPER_SRCS += \
../src/smc_gen/r_bsp/mcu/all/start.S 

C_SRCS += \
../src/smc_gen/r_bsp/mcu/all/r_bsp_common.c 

CREF += \
test2_1_G22_VFDclock.cref 

C_DEPS += \
./src/smc_gen/r_bsp/mcu/all/r_bsp_common.d 

OBJS += \
./src/smc_gen/r_bsp/mcu/all/r_bsp_common.o \
./src/smc_gen/r_bsp/mcu/all/r_bsp_common_llvm.o \
./src/smc_gen/r_bsp/mcu/all/start.o 

ASM_DEPS += \
./src/smc_gen/r_bsp/mcu/all/r_bsp_common_llvm.d 

MAP += \
test2_1_G22_VFDclock.map 

S_UPPER_DEPS += \
./src/smc_gen/r_bsp/mcu/all/start.d 


# Each subdirectory must supply rules for building sources it contributes
src/smc_gen/r_bsp/mcu/all/%.o: ../src/smc_gen/r_bsp/mcu/all/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-Os -ffunction-sections -fdata-sections -fdiagnostics-parseable-fixits -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -g -mcpu=s3 -std=gnu99 -fstack-size-section -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\all" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_config" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_pincfg" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\general" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_PORT" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_UART1" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_RTC" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22\\register_access\\llvm" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\board\\generic_rl78_g22" -DCPPAPP -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" "$<" -c -o "$@")
	@clang --target=rl78 @"$@.in"
src/smc_gen/r_bsp/mcu/all/%.o: ../src/smc_gen/r_bsp/mcu/all/%.asm
	@echo 'Building file: $<'
	$(file > $@.in,-Os -ffunction-sections -fdata-sections -fdiagnostics-parseable-fixits -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -g -mcpu=s3 -x assembler-with-cpp -DCPPAPP -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\all" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_config" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_pincfg" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\general" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_PORT" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_UART1" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_RTC" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22\\register_access\\llvm" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\board\\generic_rl78_g22" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c "$<" -o "$@")
	@clang --target=rl78 @"$@.in"
src/smc_gen/r_bsp/mcu/all/%.o: ../src/smc_gen/r_bsp/mcu/all/%.S
	@echo 'Building file: $<'
	$(file > $@.in,-Os -ffunction-sections -fdata-sections -fdiagnostics-parseable-fixits -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -g -mcpu=s3 -x assembler-with-cpp -DCPPAPP -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\all" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_config" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_pincfg" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\general" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_PORT" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_UART1" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_RTC" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22\\register_access\\llvm" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\board\\generic_rl78_g22" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c "$<" -o "$@")
	@clang --target=rl78 @"$@.in"

