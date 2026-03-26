;MG84FL516

EN_44P   EQU    0  ;package select: 0=64pin, 1=44pin

;(System)
ACC      DATA   0E0H
B        DATA   0F0H
SP       DATA   81H
DPL      DATA   82H
DPH      DATA   83H
PSW      DATA   0D0H

;(Interrupt)
IE       DATA   0A8H
AUXIE    DATA   0ADh
XICON    DATA   0C0h
IP       DATA   0B8H
IPH      DATA   0B7h
AUXIP    DATA   0AEh
AUXIPH   DATA   0AFh

;(I/O Port)
P0       DATA   80H
P1       DATA   90H
P2       DATA   0A0H
P3       DATA   0B0H
P4       DATA   0E8h
P5       DATA   0F1h
P0M0     DATA   93h
P0M1     DATA   94h
P1M0     DATA   91h
P1M1     DATA   92h
P2M0     DATA   95h
P2M1     DATA   96h
P3M0     DATA   0B1h
P3M1     DATA   0B2h
P4M0     DATA   0B3h
P4M1     DATA   0B4h
P5M0     DATA   0B5h
P5M1     DATA   0B6h

;(Timer)
TCON     DATA   88H
TMOD     DATA   89H
T2CON    DATA   0C8H
T2MOD    DATA   0C9h
RCAP2L   DATA   0CAH
RCAP2H   DATA   0CBH
TL0      DATA   8AH
TL1      DATA   8BH
TH0      DATA   8CH
TH1      DATA   8DH
TL2      DATA   0CCH
TH2      DATA   0CDH
T2CPCH   DATA   0BDh
T2CPCL   DATA   0BCh

;(Serial Port)
SCON     DATA   98H
SBUF     DATA   99H
SADDR    DATA   0A9h
SADEN    DATA   0B9h
S2CON    DATA   0AAh
S2BRT    DATA   0BAh
S2BUF    DATA   9Ah

;(ADC)
ADCTL    DATA   0C5h
ADCH     DATA   0C6h
ADCL     DATA   0BEh
ADC      DATA   0C6h ;the same as ADCH, the higher 8 bits

;(Keypad Interrupt)
KBCON    DATA   0D6h
KBPATN   DATA   0D5h
KBMASK   DATA   0D7h

;(SPI)
SPICTL   DATA   85h
SPIDAT   DATA   86h
SPISTAT  DATA   84h

;(PCA)
CCON     DATA   0D8h
CMOD     DATA   0D9h
CL       DATA   0E9h
CH       DATA   0F9h
CCAPM0   DATA   0DAh
CCAPM1   DATA   0DBh
CCAPM2   DATA   0DCh
CCAPM3   DATA   0DDh
CCAPM4   DATA   0DEh
CCAPM5   DATA   0DFh
CCAP0H   DATA   0FAh
CCAP0L   DATA   0EAh
CCAP1H   DATA   0FBh
CCAP1L   DATA   0EBh
CCAP2H   DATA   0FCh
CCAP2L   DATA   0ECh
CCAP3H   DATA   0FDh
CCAP3L   DATA   0EDh
CCAP4H   DATA   0FEh
CCAP4L   DATA   0EEh
CCAP5H   DATA   0FFh
CCAP5L   DATA   0EFh
PCAPWM0  DATA   0F2h
PCAPWM1  DATA   0F3h
PCAPWM2  DATA   0F4h
PCAPWM3  DATA   0F5h
PCAPWM4  DATA   0F6h
PCAPWM5  DATA   0F7h

;(TWSI)
SICON    DATA   0F8h
SIADR    DATA   0D1h
SIDAT    DATA   0D2h
SISTA    DATA   0D3h

;(Others)
PCON     DATA   87H
CKCON    DATA   0C7h
CKCON2   DATA   0BFh
AUXR     DATA   8Eh
AUXR2    DATA   0A6h
STRETCH  DATA   8Fh
WDTCR    DATA   0E1h

;(ISP)
ISPCR    DATA   0E7h
ISPTME   DATA   0E5h
IFD      DATA   0E2h
IFADRH   DATA   0E3h
IFADRL   DATA   0E4h
SCMD     DATA   0E6h

;(OCD)
SBK0     DATA   0CEh
SBK1     DATA   0CFh

;(bits in PSW)
CY       BIT    PSW.7
AC       BIT    PSW.6
F0       BIT    PSW.5
RS1      BIT    PSW.4
RS0      BIT    PSW.3
OV       BIT    PSW.2
P        BIT    PSW.0

;(bits in IE)
EA       BIT    IE.7
ET2      BIT    IE.5
ES       BIT    IE.4
ET1      BIT    IE.3
EX1      BIT    IE.2
ET0      BIT    IE.1
EX0      BIT    IE.0

;(bits in IP)
PX3      BIT    IP.7
PX2      BIT    IP.6
PT2      BIT    IP.5
PS       BIT    IP.4
PT1      BIT    IP.3
PX1      BIT    IP.2
PT0      BIT    IP.1
PX0      BIT    IP.0

;(bits in SCON)
SM0      BIT    SCON.7
SM1      BIT    SCON.6
SM2      BIT    SCON.5
REN      BIT    SCON.4
TB8      BIT    SCON.3
RB8      BIT    SCON.2
TI       BIT    SCON.1
RI       BIT    SCON.0
FE       BIT    SCON.7

;(bits in TCON)
TF1      BIT    TCON.7
TR1      BIT    TCON.6
TF0      BIT    TCON.5
TR0      BIT    TCON.4
IE1      BIT    TCON.3
IT1      BIT    TCON.2
IE0      BIT    TCON.1
IT0      BIT    TCON.0

;(bits in T2CON)
TF2      BIT    T2CON.7
EXF2     BIT    T2CON.6
RCLK     BIT    T2CON.5
TCLK     BIT    T2CON.4
EXEN2    BIT    T2CON.3
TR2      BIT    T2CON.2
C_T2     BIT    T2CON.1
CP_RL2   BIT    T2CON.0

;(bits in CCON)
CF       BIT    CCON.7
CR       BIT    CCON.6
CCF5     BIT    CCON.5
CCF4     BIT    CCON.4
CCF3     BIT    CCON.3
CCF2     BIT    CCON.2
CCF1     BIT    CCON.1
CCF0     BIT    CCON.0

;(bits in XICON)
IL3      BIT    XICON.7
EX3      BIT    XICON.6
IE3      BIT    XICON.5
IT3      BIT    XICON.4
IL2      BIT    XICON.3
EX2      BIT    XICON.2
IE2      BIT    XICON.1
IT2      BIT    XICON.0

;(bits in SICON)
CR2      BIT    SICON.7
ENSI     BIT    SICON.6
STA      BIT    SICON.5
STO      BIT    SICON.4
SI       BIT    SICON.3
AA       BIT    SICON.2
CR1      BIT    SICON.1
CR0      BIT    SICON.0

;(bits in P1, alternate)
T2EX     BIT    P1.1
T2       BIT    P1.0
INT3     BIT    P1.7
INT2     BIT    P1.6
CEX5     BIT    P1.7
CEX4     BIT    P1.6
CEX3     BIT    P1.5
CEX2     BIT    P1.4
CEX1     BIT    P1.3
CEX0     BIT    P1.2
ECI      BIT    P1.1

;(bits in P2, alternate)
IF EN_44P=1 ;for 44-pin package
S2TXD    BIT    P2.5
S2RXD    BIT    P2.4
SPI_MOSI BIT    P2.3
SPI_MISO BIT    P2.2
SPI_CLK  BIT    P2.1
SPI_SS   BIT    P2.0
ENDIF

;(bits in P3, alternate)
RD       BIT    P3.7
WR       BIT    P3.6
T1       BIT    P3.5
T0       BIT    P3.4
INT1     BIT    P3.3
INT0     BIT    P3.2
TXD      BIT    P3.1
RXD      BIT    P3.0
S2CKO    BIT    P3.5
T0CKO    BIT    P3.4
IF EN_44P=1 ;for 44-pin package
I2C_SDA  BIT    P3.5  ;when EN_44P=1
I2C_SCL  BIT    P3.4  ;
ENDIF

;(bits in P4, alternate)
IF EN_44P=0 ;for 64-pin package
SPI_MOSI BIT    P4.7
SPI_MISO BIT    P4.6
SPI_CLK  BIT    P4.5
SPI_SS   BIT    P4.4
I2C_SDA  BIT    P4.3
I2C_SCL  BIT    P4.2
S2TXD    BIT    P4.1
S2RXD    BIT    P4.0
ENDIF

