
// This is the command sequence that rotates the SSD2119 driver coordinate frame

  rotation = m % 4;

  writecommand(SSD2119_EntryMode1);
  switch (rotation) {
    case 0: // Landscape default 0x6870
      writedata(0x68); writedata(0x70);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 1: // Portrait
      writedata(0x68); writedata(0x58);
      _width  = _init_height;
      _height = _init_width;
      break;
    case 2: // Inverter landscape
      writedata(0x68); writedata(0x40);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 3: // Inverted portrait
      writedata(0x68); writedata(0x68);
      _width  = _init_height;
      _height = _init_width;
      break;
  }
