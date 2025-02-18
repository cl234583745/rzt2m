################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../rzt/board/rzt2m_rsk/board_init.c \
../rzt/board/rzt2m_rsk/board_leds.c 

LST += \
board_init.lst \
board_leds.lst 

C_DEPS += \
./rzt/board/rzt2m_rsk/board_init.d \
./rzt/board/rzt2m_rsk/board_leds.d 

OBJS += \
./rzt/board/rzt2m_rsk/board_init.o \
./rzt/board/rzt2m_rsk/board_leds.o 

MAP += \
rzt2m_coremark_fsp220_cpu1.map 


# Each subdirectory must supply rules for building sources it contributes
rzt/board/rzt2m_rsk/%.o: ../rzt/board/rzt2m_rsk/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-r52 -mthumb -mfloat-abi=hard -mfpu=neon-fp-armv8 -fdiagnostics-parseable-fixits -Ofast -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -Wnull-dereference -g -gdwarf-4 -D_RENESAS_RZT_ -D_RZT_CORE=CR52_1 -D_RZT_ORDINAL=2 -I"E:\\RS_workspace\\rzt2m_coremark_fsp220_cpu1\\src" -I"E:\\RS_workspace\\rzt2m_coremark_fsp220_cpu1\\coremark" -I"." -I"E:\\RS_workspace\\rzt2m_coremark_fsp220_cpu1\\rzt\\fsp\\inc" -I"E:\\RS_workspace\\rzt2m_coremark_fsp220_cpu1\\rzt\\fsp\\inc\\api" -I"E:\\RS_workspace\\rzt2m_coremark_fsp220_cpu1\\rzt\\fsp\\inc\\instances" -I"E:\\RS_workspace\\rzt2m_coremark_fsp220_cpu1\\rzt\\fsp\\src\\bsp\\mcu\\all\\cr" -I"E:\\RS_workspace\\rzt2m_coremark_fsp220_cpu1\\rzt\\arm\\CMSIS_5\\CMSIS\\Core_R\\Include" -I"E:\\RS_workspace\\rzt2m_coremark_fsp220_cpu1\\rzt_gen" -I"E:\\RS_workspace\\rzt2m_coremark_fsp220_cpu1\\rzt_cfg\\fsp_cfg\\bsp" -I"E:\\RS_workspace\\rzt2m_coremark_fsp220_cpu1\\rzt_cfg\\fsp_cfg" -std=c99 -Wno-format-truncation -Wno-stringop-overflow --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@arm-none-eabi-gcc @"$@.in"

