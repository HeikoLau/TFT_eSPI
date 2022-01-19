
// This is the command sequence that initialises the SSD2119 driver

{ 
  delay(100);
  
  writecommand(SSD2119_VCOMOTP1);                          writedata(0x00); writedata(0x06); // VCOM OTP
  writecommand(SSD2119_OscillationStart);                  writedata(0x00); writedata(0x01); // start Oscillator
  writecommand(SSD2119_SleepMode1);                        writedata(0x00); writedata(0x00); // Sleep mode
  writecommand(SSD2119_DriverOutputControl);               writedata(0x72); writedata(0xef); // 0x72EF Driver Output Control
  writecommand(SSD2119_LCDdriveACcontrol);                 writedata(0x06); writedata(0x00); // LCD Driving Waveform Control
  writecommand(SSD2119_PowerControl1);                     writedata(0x6a); writedata(0x38); // Power Control 1
  writecommand(SSD2119_EntryMode1);                        writedata(0x68); writedata(0x70); // 0x6874 Entry Mode
  writecommand(SSD2119_GateScanStartPosition);             writedata(0x00); writedata(0x00); // Gate Scan Position
  writecommand(SSD2119_FrameCycleControl);                 writedata(0x53); writedata(0x08); // Frame Cycle Control
  writecommand(SSD2119_PowerControl2);                     writedata(0x00); writedata(0x03); // Power Control 2
  writecommand(SSD2119_PowerControl3);                     writedata(0x00); writedata(0x0a); // Power Control 3
  writecommand(SSD2119_PowerControl4);                     writedata(0x2e); writedata(0x00); // Power Control 4
  writecommand(SSD2119_PowerControl5);                     writedata(0x00); writedata(0xb7); // 0x00be Power Control 5
  writecommand(SSD2119_FrameFrequency);                    writedata(0x80); writedata(0x00); // Frame Frequency Control
  writecommand(SSD2119_AnalogueSetting);                   writedata(0x38); writedata(0x00); // 0x7800 Analog setting
  writecommand(0x27);                                      writedata(0x00); writedata(0x78); // Critical setting to avoid pixel defect
  writecommand(SSD2119_SetGDDRAMx);                        writedata(0x00); writedata(0x00); // Ram Address Set
  writecommand(SSD2119_SetGDDRAMy);                        writedata(0x00); writedata(0x00); // Ram Address Set
  writecommand(SSD2119_SleepMode2);                        writedata(0x0d); writedata(0x99); // 0x08d9 Sleep mode
  
  writecommand(SSD2119_VerticalRAMaddressPosition);        writedata(0xef); writedata(0x00); // Vertical RAM address position
  writecommand(SSD2119_HorizontalRAMaddressStartPosition); writedata(0x00); writedata(0x00); // Horizontal RAM start address position
  writecommand(SSD2119_HorizontalRAMaddressEndPosition);   writedata(0x01); writedata(0xef); // Horizontal RAM end address position (wrap after it)
  
  writecommand(SSD2119_Ycontrol01);                        writedata(0x00); writedata(0x00); // Adjust the Gamma Curve
  writecommand(SSD2119_Ycontrol02);                        writedata(0x01); writedata(0x04);
  writecommand(SSD2119_Ycontrol03);                        writedata(0x01); writedata(0x00);
  writecommand(SSD2119_Ycontrol04);                        writedata(0x03); writedata(0x05);
  writecommand(SSD2119_Ycontrol05);                        writedata(0x05); writedata(0x05);
  writecommand(SSD2119_Ycontrol06);                        writedata(0x03); writedata(0x05);
  writecommand(SSD2119_Ycontrol07);                        writedata(0x07); writedata(0x07);
  writecommand(SSD2119_Ycontrol08);                        writedata(0x03); writedata(0x00);
  writecommand(SSD2119_Ycontrol09);                        writedata(0x12); writedata(0x00);
  writecommand(SSD2119_Ycontrol10);                        writedata(0x08); writedata(0x00);
  
  writecommand(SSD2119_DisplayControl);                    writedata(0x00); writedata(0x33); // Display Control
  
  delay(150);
}
