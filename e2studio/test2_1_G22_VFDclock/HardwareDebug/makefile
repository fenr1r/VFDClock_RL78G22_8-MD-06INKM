################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

-include makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/smc_gen/r_pincfg/subdir.mk
-include src/smc_gen/r_bsp/mcu/rl78_g22/subdir.mk
-include src/smc_gen/r_bsp/mcu/all/subdir.mk
-include src/smc_gen/r_bsp/board/generic_rl78_g22/subdir.mk
-include src/smc_gen/general/subdir.mk
-include src/smc_gen/Config_UART1/subdir.mk
-include src/smc_gen/Config_RTC/subdir.mk
-include src/smc_gen/Config_PORT/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_UPPER_DEPS)),)
-include $(CC_UPPER_DEPS)
endif
ifneq ($(strip $(C++M_UPPER_DEPS)),)
-include $(C++M_UPPER_DEPS)
endif
ifneq ($(strip $(C++_UPPER_DEPS)),)
-include $(C++_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_UPPER_DEPS)),)
-include $(CPP_UPPER_DEPS)
endif
ifneq ($(strip $(FSY_DEPS)),)
-include $(FSY_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(SRC_UPPER_DEPS)),)
-include $(SRC_UPPER_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(CXXM_DEPS)),)
-include $(CXXM_DEPS)
endif
ifneq ($(strip $(PP_UPPER_DEPS)),)
-include $(PP_UPPER_DEPS)
endif
ifneq ($(strip $(P_DEPS)),)
-include $(P_DEPS)
endif
ifneq ($(strip $(JMP_UPPER_DEPS)),)
-include $(JMP_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(SX_UPPER_DEPS)),)
-include $(SX_UPPER_DEPS)
endif
ifneq ($(strip $(SMSASM_UPPER_DEPS)),)
-include $(SMSASM_UPPER_DEPS)
endif
ifneq ($(strip $(SMSASM_DEPS)),)
-include $(SMSASM_DEPS)
endif
ifneq ($(strip $(CXX_UPPER_DEPS)),)
-include $(CXX_UPPER_DEPS)
endif
ifneq ($(strip $(JMP_DEPS)),)
-include $(JMP_DEPS)
endif
ifneq ($(strip $(CCM_DEPS)),)
-include $(CCM_DEPS)
endif
ifneq ($(strip $(P_UPPER_DEPS)),)
-include $(P_UPPER_DEPS)
endif
ifneq ($(strip $(CXXM_UPPER_DEPS)),)
-include $(CXXM_UPPER_DEPS)
endif
ifneq ($(strip $(FSY_UPPER_DEPS)),)
-include $(FSY_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
$(C_DEPS):$(SMS_ASM)
endif
ifneq ($(strip $(CCM_UPPER_DEPS)),)
-include $(CCM_UPPER_DEPS)
endif
ifneq ($(strip $(SRC_DEPS)),)
-include $(SRC_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(PP_DEPS)),)
-include $(PP_DEPS)
endif
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C++M_DEPS)),)
-include $(C++M_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS += \

OBJCOPY += \
test2_1_G22_VFDclock.srec \

SECONDARY_SIZE += \
test2_1_G22_VFDclock.siz \

OBJDUMP += \
test2_1_G22_VFDclock.objdump \


# All Target
all: test2_1_G22_VFDclock.elf secondary-outputs

# Tool invocations
test2_1_G22_VFDclock.elf: $(OBJS) $(USER_OBJS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) $(LINKER_SCRIPT)
	$(file > test2_1_G22_VFDclock.elf.in,-Os -ffunction-sections -fdata-sections -fdiagnostics-parseable-fixits -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -g -mcpu=s3 -o "test2_1_G22_VFDclock.elf" $(OBJS) $(USER_OBJS) -T "D:/Users/fenrir_/Drive/Electronics/e2_studio/workspace/test2_1_G22_VFDclock/src/linker_script.ld" -Wl,-Map=test2_1_G22_VFDclock.map -Wl,--start-group  -Wl,--end-group -nostartfiles -Wl,-e_PowerON_Reset -Wl,--gc-sections -Wl,--icf=none -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\all" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_config" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_pincfg" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\general" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_PORT" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_UART1" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\Config_RTC" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22\\register_access\\llvm" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\mcu\\rl78_g22" -I"D:\\Users\\fenrir_\\Drive\\Electronics\\e2_studio\\workspace\\test2_1_G22_VFDclock\\src\\smc_gen\\r_bsp\\board\\generic_rl78_g22")
	@echo Building target: $@ && clang++ --target=rl78 @"test2_1_G22_VFDclock.elf.in"
: 
	rl78-elf-libgen  --select-lib=newlib --compiler-options=-Os,-ffunction-sections,-fdata-sections,-fdiagnostics-parseable-fixits,-fno-strict-aliasing,-mcpu=s3  -o
test2_1_G22_VFDclock.srec: test2_1_G22_VFDclock.elf
	llvm-objcopy "test2_1_G22_VFDclock.elf" -O srec  "test2_1_G22_VFDclock.srec"
test2_1_G22_VFDclock.siz: test2_1_G22_VFDclock.elf
	llvm-size --format=berkeley --totals "test2_1_G22_VFDclock.elf"
test2_1_G22_VFDclock.objdump: test2_1_G22_VFDclock.elf
	llvm-objdump  -S "test2_1_G22_VFDclock.elf">"test2_1_G22_VFDclock.objdump"
# Other Targets
clean:
	-$(file > clean_file.tmp,  $(CC_UPPER_DEPS)  $(C++M_UPPER_DEPS)  $(C++_UPPER_DEPS)  $(CPP_UPPER_DEPS)  $(FSY_DEPS)  $(C_UPPER_DEPS)  $(SECONDARY_SIZE)  $(SRC_UPPER_DEPS)  $(S_DEPS)  $(CXXM_DEPS)  $(PP_UPPER_DEPS)  $(P_DEPS)  $(CREF)  $(OBJCOPY)  $(JMP_UPPER_DEPS)  $(ASM_UPPER_DEPS)  $(OBJDUMP)  $(CXX_DEPS)  $(SX_UPPER_DEPS)  $(SMSASM_UPPER_DEPS)  $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS)  $(SMS_ASM)  $(SMSASM_DEPS)  $(CXX_UPPER_DEPS)  $(JMP_DEPS)  $(CCM_DEPS)  $(P_UPPER_DEPS)  $(CXXM_UPPER_DEPS)  $(FSY_UPPER_DEPS)  $(C_DEPS)  $(CCM_UPPER_DEPS)  $(SRC_DEPS)  $(CC_DEPS)  $(PP_DEPS)  $(SX_DEPS)  $(C++_DEPS)  $(OBJS)  $(ASM_DEPS)  $(MAP)  $(S_UPPER_DEPS)  $(C++M_DEPS)  $(CPP_DEPS) )
	-@ xargs -P 2 -s 32000 -t -a clean_file.tmp $(RM)
	-@$(RM) clean_file.tmp
	-$(RM)  test2_1_G22_VFDclock.elf
	-@echo ' '

secondary-outputs: $(SMS_ASM) $(OBJCOPY) $(SECONDARY_SIZE) $(OBJDUMP)

.PHONY: all clean dependents 

-include ../makefile.targets
