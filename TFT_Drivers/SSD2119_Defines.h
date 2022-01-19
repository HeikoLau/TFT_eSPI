// Change the width and height if required (defined in landscape mode)
// or use the constructor to over-ride defaults
#ifndef TFT_WIDTH
  #define TFT_WIDTH  320
#endif
#ifndef TFT_HEIGHT
  #define TFT_HEIGHT 240
#endif

#define WRITE_COMMAND_16        // Change TFT_eSPI::writecommand(); to use tft_Write_16(c);

// Generic commands
#define TFT_NOP     0x00
#define TFT_SWRST   0x00


#define TFT_CASET 0

#define TFT_CASET1     SSD2119_HorizontalRAMaddressStartPosition
#define TFT_CASET2     SSD2119_HorizontalRAMaddressEndPosition

#define TFT_PASET      SSD2119_VerticalRAMaddressPosition

#define TFT_RAM_ADDR1  SSD2119_SetGDDRAMx
#define TFT_RAM_ADDR2  SSD2119_SetGDDRAMy

#define TFT_RAMWR      SSD2119_RAMdataWrite

#define TFT_MAD_BGR 0x10
#define TFT_MAD_RGB 0x00

#ifdef TFT_RGB_ORDER
  #if (TFT_RGB_ORDER == 1)
    #define TFT_MAD_COLOR_ORDER TFT_MAD_RGB
  #else
    #define TFT_MAD_COLOR_ORDER TFT_MAD_BGR
  #endif
#else
  #define TFT_MAD_COLOR_ORDER TFT_MAD_BGR
#endif


// Not used
#define TFT_INVOFF  0x00
#define TFT_INVON   0x00
#define TFT_RAMRD   0x00
#define TFT_IDXRD   0x00

/* SSD2119 Registers */
#define SSD2119_OscillationStart                  0x00
#define SSD2119_DriverOutputControl               0x01
#define SSD2119_LCDdriveACcontrol                 0x02
#define SSD2119_PowerControl1                     0x03
#define SSD2119_DisplayControl                    0x07
#define SSD2119_FrameCycleControl                 0x0b
#define SSD2119_PowerControl2                     0x0c
#define SSD2119_PowerControl3                     0x0d
#define SSD2119_PowerControl4                     0x0e
#define SSD2119_GateScanStartPosition             0x0f
#define SSD2119_SleepMode1                        0x10
#define SSD2119_EntryMode1                        0x11
#define SSD2119_SleepMode2                        0x12
#define SSD2119_EntryMode2                        0x15
#define SSD2119_HorizontalPorch                   0x16
#define SSD2119_VerticalPorch                     0x17
#define SSD2119_PowerControl5                     0x1e
#define SSD2119_Uniformity                        0x20
#define SSD2119_RAMdataWrite                      0x22
#define SSD2119_FrameFrequency                    0x25
#define SSD2119_AnalogueSetting                   0x26
#define SSD2119_VCOMOTP1                          0x28
#define SSD2119_VCOMOTP2                          0x29
#define SSD2119_Ycontrol01                        0x30
#define SSD2119_Ycontrol02                        0x31
#define SSD2119_Ycontrol03                        0x32
#define SSD2119_Ycontrol04                        0x33
#define SSD2119_Ycontrol05                        0x34
#define SSD2119_Ycontrol06                        0x35
#define SSD2119_Ycontrol07                        0x36
#define SSD2119_Ycontrol08                        0x37
#define SSD2119_Ycontrol09                        0x3a
#define SSD2119_Ycontrol10                        0x3b
#define SSD2119_VerticalScroll1                   0x41
#define SSD2119_VerticalScroll2                   0x42
#define SSD2119_VerticalRAMaddressPosition        0x44
#define SSD2119_HorizontalRAMaddressStartPosition 0x45
#define SSD2119_HorizontalRAMaddressEndPosition   0x46
#define SSD2119_FirstWindowStart                  0x48
#define SSD2119_FirstWindowEnd                    0x49
#define SSD2119_SecondWindowStart                 0x4a
#define SSD2119_SecondWindowEnd                   0x4b
#define SSD2119_SetGDDRAMx                        0x4e
#define SSD2119_SetGDDRAMy                        0x4f

// Delay between some initialisation commands
#define TFT_INIT_DELAY 0x00 // Not used unless commandlist invoked
