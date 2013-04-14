TMP0			@0x00	# временные ячейки памяти (rw)
TMP1			@0x01
TMP2			@0x02
TMP3			@0x03
TMP4			@0x04
TMP5			@0x05
TMP6			@0x06
TMP7			@0x07
TMP8			@0x08
TMP9			@0x09
TMP10			@0x0A
TMP11			@0x0B
TMP12			@0x0C
TMP13			@0x0D
TMP14			@0x0E
TMP15			@0x0F
TMP16			@0x10
TMP17			@0x11
TMP18			@0x12
TMP19			@0x13
TMP20			@0x14
TMP21			@0x15
TMP22			@0x16
TMP23			@0x17
TMP24			@0x18
TMP25			@0x19
TMP26			@0x1A
TMP27			@0x1B
TMP28			@0x1C
TMP29			@0x1D
TMP30			@0x1E
TMP31			@0x1F

LED0			@0x20	# знакоместа символьного индикатора (rw)
LED1			@0x21
LED2			@0x22
LED3			@0x23

LED0_CFG		@0x24	# конфигурация вывода символов на индикатор (rw)
LED1_CFG		@0x25
LED2_CFG		@0x26
LED3_CFG		@0x27

IND1			@0x30	# светодиоды (rw)
IND2			@0x31
IND3			@0x32
IND4			@0x33
IND5			@0x34

IND1_CFG		@0x35	# конфигурация светодиодов (rw)
IND2_CFG		@0x36
IND3_CFG		@0x37
IND4_CFG		@0x38
IND5_CFG		@0x39

BTN_UP			@0x40	# факт нажатия кнопок (r)
BTN_DOWN		@0x41
BTN_ENTER		@0x42

LONG_BTN_UP		@0x43	# факт длительного нажания кнопок (r)
LONG_BTN_DOWN	@0x44
LONG_BTN_ENTER	@0x45

BTN_UP_STATUS	@0x46	# состояние кнопок (r)
BTN_DOWN_STATUS	@0x47
BTN_ENTR_STATUS	@0x48

NETLIST_SELECT	@0x50	# селектор состояний автомата (rw)
VIDEO_MODE		@0x51	# видеорежим (временная ячейка) (rw)
RST				@0x52	# управление ВМ (rw)

T1				@0x60	# значения температурных датчиков (r)
T2				@0x61

T1_STATUS		@0x62	# статус драйвера температурных датчиков (r)
T2_STATUS		@0x63

T1_LAST			@0x64	# сколько секунд прошло после последней нормаьлной температуры (r)
T2_LAST			@0x65

T_TRY			@0x66	# число попыток определения температуры (r)

S1				@0x70	# релейные выходы (rw)
S2				@0x71
S3				@0x72
S4				@0x73

I4				@0x74	# дискретные входы/выходы (rw)
I5				@0x75

HEAT			@0x76	# дискретный ввох/выход (rw)

PWM_PERCENT		@0x77	# аналоговый выход 10В с шагом 1В (rw)

TIMER_MSEC		@0x80	# милисекундный таймер (rw)
TIMER_SEC		@0x81	# милисекундный таймер (rw)

SEC				@0x90	# часы (rw)
MIN				@0x91
HOUR			@0x92
DAY				@0x94
MON				@0x95
YEAR			@0x96
FINETIME		@0x97
ERROR			@0x98

DB_VALUE		@0xA0	# поддержка расписания
SYNC			@0xA1
DB_UPDATE		@0xA2

BAT_ERROR		@0xB0	# ошибки работы (r)
DB_ERROR		@0xB1

EEADDR0			@0xC0	# энергонезависимая память (rw)
EEADDR1			@0xC1
EEADDR2			@0xC2
EEADDR3			@0xC3
EEADDR4			@0xC4
EEADDR5			@0xC5
EEADDR6			@0xC6
EEADDR7			@0xC7

#----------------

# специальные имена для ячеек EEPROM

T3			@0xC0
T4			@0xC1
PWM_SAVE	@0xC2
CTRL_STATE	@0xC3
EE_SUM		@0xC4

# спец названия ячеек
TIMER0				@0x10
TIMER1				@0x11

S2_OLD				@0x09
I5_OLD				@0x13
S3_OLD				@0x0A
S4_OLD				@0x0B
#Tin_OLD				@0x16

EDT					@0x17
#RB0					@0x18
#RB1					@0x19

#Tout_OLD			@0x1A

TIMER2				@0x1B
TIMER				@0x18

DOUT	@0x74

# the following variables should be used carefully
MEM_T1		@0x17
MEM_T2		@0x16
ADMIN_T1	@0x15
ADMIN_T2	@0x14
