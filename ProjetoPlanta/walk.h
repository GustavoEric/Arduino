//
// Homer in bushes
// 128x128x8-bpp 29 frames
//
const byte PROGMEM frames[][128] = {
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,64,0,0,7,224,0,0,29,184,0,0,112,12,0,0,64,2,0,0,192,3,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,1,128,1,128,1,128,1,128,1,0,0,128,1,0,0,128,3,0,0,192,2,0,0,64,4,0,0,32,8,0,0,16,8,0,0,48,6,0,0,112,3,255,255,192,0,31,252,0,0,8,16,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,64,0,0,7,224,0,0,29,184,0,0,112,12,0,0,64,2,0,0,192,3,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,1,128,1,128,1,128,1,128,1,0,0,128,1,0,0,128,3,0,0,192,2,0,0,64,4,0,0,32,8,0,0,16,8,0,0,48,6,0,0,112,3,255,255,192,0,31,252,0,0,8,16,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,64,0,0,7,224,0,0,29,184,0,0,112,12,0,0,64,2,0,0,192,3,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,1,128,1,128,1,128,1,128,1,0,0,128,1,0,0,128,3,0,0,192,2,0,0,64,4,0,0,32,8,0,0,16,8,0,0,48,6,0,0,112,3,255,255,192,0,31,252,0,0,8,16,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,64,0,0,7,224,0,0,29,184,0,0,112,12,0,0,64,2,0,0,192,3,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,1,128,1,128,1,128,1,128,1,0,0,128,1,0,0,128,3,0,0,192,2,0,0,64,4,0,0,32,8,0,0,16,8,0,0,48,6,0,0,112,3,255,255,192,0,31,252,0,0,8,16,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,96,0,0,7,224,0,0,29,184,0,0,96,12,0,0,64,6,0,0,192,2,0,0,128,1,0,0,128,1,0,0,128,1,0,1,128,1,0,1,128,1,0,1,128,1,0,1,0,1,0,1,0,1,0,1,0,1,128,3,0,0,128,2,0,0,128,6,0,0,192,12,0,0,96,8,0,0,32,8,0,0,48,14,0,0,96,3,255,255,192,0,63,254,0,0,8,16,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,96,0,0,31,224,0,0,57,184,0,0,96,12,0,0,192,6,0,0,128,2,0,0,128,2,0,1,128,2,0,1,0,3,0,1,0,3,0,1,0,3,0,1,0,3,0,3,0,3,0,3,0,3,0,2,0,1,0,6,0,1,0,4,0,1,0,8,0,1,128,16,0,0,128,16,0,0,64,24,0,0,96,15,0,0,96,3,254,3,192,0,15,254,0,0,8,16,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,6,96,0,0,31,192,0,0,113,240,0,0,192,24,0,0,128,12,0,1,128,6,0,1,0,2,0,1,0,2,0,1,0,2,0,3,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,6,0,2,0,4,0,2,0,12,0,2,0,24,0,2,0,48,0,3,0,32,0,1,0,32,0,1,128,56,0,0,128,15,0,0,192,3,248,3,128,0,31,255,0,0,8,16,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,96,0,0,31,192,0,0,97,240,0,0,192,24,0,1,128,12,0,1,0,4,0,1,0,6,0,3,0,6,0,2,0,2,0,2,0,6,0,6,0,6,0,6,0,6,0,4,0,4,0,12,0,4,0,8,0,4,0,16,0,4,0,32,0,4,0,64,0,6,0,64,0,2,0,96,0,3,0,56,0,1,0,15,0,1,128,1,252,3,0,0,15,254,0,0,8,16,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,6,96,0,0,31,192,0,0,97,240,0,0,192,24,0,1,128,12,0,1,0,4,0,3,0,4,0,2,0,6,0,2,0,6,0,2,0,4,0,6,0,4,0,4,0,4,0,12,0,4,0,8,0,4,0,24,0,4,0,48,0,4,0,96,0,4,0,192,0,4,0,64,0,6,0,96,0,2,0,56,0,3,0,7,128,1,0,0,248,3,0,0,15,254,0,0,8,48,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,96,0,0,31,192,0,0,113,240,0,0,192,24,0,0,128,12,0,1,128,4,0,1,0,6,0,1,0,2,0,3,0,2,0,3,0,2,0,2,0,2,0,2,0,2,0,6,0,2,0,4,0,2,0,12,0,2,0,8,0,2,0,24,0,2,0,32,0,2,0,96,0,3,0,32,0,1,0,48,0,0,128,14,0,0,128,1,248,3,128,0,31,254,0,0,16,96,0,0,16,64,0,0,8,192,0,0,15,128,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,64,0,0,7,224,0,0,29,184,0,0,96,12,0,0,64,6,0,0,192,3,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,1,128,1,0,1,128,1,0,1,128,1,0,1,0,1,128,1,0,0,128,3,0,0,128,2,0,0,192,6,0,0,64,12,0,0,96,8,0,0,48,8,0,0,48,12,0,0,112,3,255,255,192,0,127,252,0,0,32,128,0,0,32,128,0,0,49,128,0,0,31,0,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,6,64,0,0,3,248,0,0,15,142,0,0,24,2,0,0,48,1,0,0,96,1,128,0,64,0,128,0,64,0,128,0,64,0,128,0,64,0,192,0,64,0,192,0,64,0,64,0,64,0,64,0,64,0,96,0,64,0,32,0,64,0,48,0,64,0,24,0,192,0,12,0,128,0,4,1,128,0,4,3,0,0,28,3,0,0,240,1,128,31,128,0,127,240,0,0,96,128,0,0,97,128,0,0,51,0,0,0,30,0,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,6,64,0,0,3,248,0,0,15,134,0,0,24,3,0,0,48,1,128,0,32,0,128,0,96,0,128,0,96,0,192,0,64,0,64,0,96,0,64,0,96,0,96,0,96,0,96,0,32,0,32,0,32,0,48,0,32,0,24,0,32,0,8,0,32,0,4,0,96,0,2,0,64,0,2,0,192,0,6,0,128,0,28,0,128,1,240,0,192,63,128,0,127,240,0,0,8,32,0,0,8,32,0,0,12,96,0,0,7,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,6,64,0,0,3,248,0,0,15,142,0,0,24,3,0,0,48,1,0,0,96,1,128,0,64,0,128,0,64,0,128,0,64,0,128,0,64,0,192,0,64,0,64,0,64,0,64,0,64,0,64,0,64,0,96,0,64,0,32,0,64,0,16,0,64,0,24,0,192,0,12,0,128,0,6,1,128,0,4,1,0,0,28,1,0,0,240,1,128,31,128,0,255,251,0,0,0,131,0,0,0,194,0,0,0,102,0,0,0,60,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,6,64,0,0,7,240,0,0,29,184,0,0,48,6,0,0,96,2,0,0,64,3,0,0,192,1,0,0,128,1,0,0,128,1,0,0,128,1,128,0,128,1,128,0,128,1,128,0,128,0,128,0,128,0,128,1,128,0,128,1,0,0,192,1,0,0,64,3,0,0,32,6,0,0,48,4,0,0,24,4,0,0,16,6,0,0,112,3,255,255,192,0,63,248,64,0,0,16,64,0,0,24,192,0,0,15,128,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,96,0,0,31,224,0,0,57,184,0,0,96,12,0,0,192,6,0,0,128,2,0,1,128,2,0,1,128,2,0,1,0,2,0,1,0,3,0,1,0,3,0,1,0,3,0,3,0,3,0,2,0,3,0,2,0,3,0,6,0,1,0,12,0,1,0,24,0,1,128,16,0,0,128,16,0,0,192,16,0,0,64,14,0,0,64,1,252,3,192,0,15,255,0,0,0,130,0,0,0,130,0,0,0,198,0,0,0,120,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,6,96,0,0,31,192,0,0,113,240,0,0,192,24,0,0,128,12,0,1,128,6,0,1,0,2,0,1,0,2,0,1,0,2,0,3,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,6,0,2,0,4,0,2,0,12,0,2,0,24,0,2,0,48,0,3,0,32,0,1,0,32,0,1,128,56,0,0,128,15,0,0,192,3,248,3,128,0,63,255,0,0,32,192,0,0,48,128,0,0,17,128,0,0,15,0,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,96,0,0,31,224,0,0,57,184,0,0,96,12,0,0,192,6,0,0,128,2,0,0,128,2,0,1,128,2,0,1,0,3,0,1,0,3,0,1,0,3,0,1,0,3,0,3,0,3,0,2,0,3,0,2,0,1,0,6,0,1,0,12,0,1,0,24,0,1,128,16,0,0,128,16,0,0,64,16,0,0,96,14,0,0,64,1,252,3,128,1,15,254,0,1,6,0,0,1,132,0,0,0,252,0,0,0,48,0,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,6,64,0,0,7,240,0,0,29,184,0,0,48,6,0,0,96,2,0,0,64,3,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,128,0,128,1,128,0,128,1,128,0,128,0,128,1,128,0,128,1,128,0,128,1,0,0,192,1,0,0,64,3,0,0,96,6,0,0,48,4,0,0,16,12,0,0,16,6,0,0,112,3,255,255,192,0,127,248,0,0,96,128,0,0,33,128,0,0,49,0,0,0,30,0,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,6,64,0,0,7,248,0,0,29,156,0,0,48,6,0,0,96,3,0,0,64,1,0,0,64,1,0,0,64,1,128,0,192,0,128,0,192,0,128,0,192,0,128,0,192,0,128,0,192,0,192,0,192,0,64,0,128,0,64,0,128,0,96,0,128,0,48,1,128,0,16,1,0,0,8,2,0,0,8,6,0,0,24,2,0,0,112,1,192,63,192,0,127,248,0,0,2,8,0,0,2,8,0,0,3,24,0,0,1,240,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,6,64,0,0,7,240,0,0,29,188,0,0,48,6,0,0,96,2,0,0,64,1,0,0,192,1,0,0,128,1,128,0,128,1,128,0,128,1,128,0,128,0,128,0,128,0,128,0,128,0,128,0,128,0,128,0,128,0,192,1,128,0,64,1,128,0,96,1,0,0,48,2,0,0,16,6,0,0,24,4,0,0,24,6,0,0,112,3,224,127,192,0,127,251,0,0,0,131,0,0,0,194,0,0,0,102,0,0,0,60,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,64,0,0,7,224,0,0,29,184,0,0,96,12,0,0,64,6,0,0,192,3,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,1,128,1,0,1,128,1,0,1,0,1,128,1,0,0,128,1,0,0,128,2,0,0,192,6,0,0,64,12,0,0,96,8,0,0,48,8,0,0,48,14,0,0,112,3,255,255,224,0,127,252,0,0,1,4,0,0,1,4,0,0,1,140,0,0,0,248,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,96,0,0,15,224,0,0,61,184,0,0,96,12,0,0,64,6,0,0,192,2,0,0,128,3,0,0,128,1,0,1,128,1,0,1,128,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,1,0,2,0,1,128,6,0,0,128,4,0,0,192,8,0,0,64,24,0,0,96,8,0,0,32,12,0,0,96,3,254,7,192,0,15,254,0,0,8,32,0,0,8,32,0,0,4,96,0,0,7,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,96,0,0,15,224,0,0,61,184,0,0,96,12,0,0,64,6,0,0,192,2,0,0,128,3,0,0,128,1,0,0,128,1,0,1,128,1,0,1,128,1,0,1,128,1,0,1,0,1,0,1,0,1,0,1,0,1,128,3,0,0,128,2,0,0,128,4,0,0,192,12,0,0,96,24,0,0,32,8,0,0,48,14,0,0,96,3,255,255,192,0,63,254,0,0,48,64,0,0,16,64,0,0,24,128,0,0,15,128,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,64,0,0,7,224,0,0,29,184,0,0,96,12,0,0,64,6,0,0,192,3,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,1,128,1,0,1,128,1,0,1,128,1,0,1,0,1,128,1,0,0,128,3,0,0,128,2,0,0,192,6,0,0,64,12,0,0,96,8,0,0,48,8,0,0,48,12,0,0,96,3,255,255,192,0,127,252,0,0,24,32,0,0,24,96,0,0,12,64,0,0,7,128,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,64,0,0,7,224,0,0,29,184,0,0,112,12,0,0,64,2,0,0,192,3,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,1,128,1,128,1,128,1,128,1,0,0,128,1,0,0,128,3,0,0,192,2,0,0,64,4,0,0,32,8,0,0,16,8,0,0,48,6,0,0,112,3,255,255,192,0,31,252,0,0,8,16,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,64,0,0,7,224,0,0,29,184,0,0,112,12,0,0,64,2,0,0,192,3,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,1,128,1,128,1,128,1,128,1,0,0,128,1,0,0,128,3,0,0,192,2,0,0,64,4,0,0,32,8,0,0,16,8,0,0,48,6,0,0,112,3,255,255,192,0,31,252,0,0,8,16,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0},
  {0,0,0,0,0,3,192,0,0,2,64,0,0,2,64,0,0,7,224,0,0,29,184,0,0,112,12,0,0,64,2,0,0,192,3,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,0,128,1,0,1,128,1,128,1,128,1,128,1,0,0,128,1,0,0,128,3,0,0,192,2,0,0,64,4,0,0,32,8,0,0,16,8,0,0,48,6,0,0,112,3,255,255,192,0,31,252,0,0,8,16,0,0,12,48,0,0,4,32,0,0,3,192,0,0,0,0,0}
};