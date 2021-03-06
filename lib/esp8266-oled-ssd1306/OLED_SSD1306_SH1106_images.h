#define espeasy_logo_width 36
#define espeasy_logo_height 36
const char espeasy_logo_bits[] PROGMEM= {
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x60, 0x40, 0xc0, 0x00, 0x00, 0x70, 0xf0, 0xe0,
     0x01, 0x00, 0x78, 0xf8, 0xf0, 0x01, 0x00, 0x3c, 0x7c, 0xf8, 0x00, 0x00,
     0x1e, 0x3e, 0x7c, 0x00, 0x00, 0x0f, 0x1f, 0x3e, 0x00, 0x80, 0x87, 0x0f,
     0x1f, 0x00, 0xc0, 0xc3, 0x87, 0x0f, 0x00, 0xe0, 0xe1, 0xc3, 0x07, 0x00,
     0xf0, 0xf0, 0xe1, 0xc3, 0x00, 0x78, 0xf8, 0xf0, 0xe1, 0x01, 0x30, 0x7c,
     0xf8, 0xf0, 0x00, 0x00, 0x3e, 0x7c, 0x78, 0x00, 0x00, 0x1f, 0x3e, 0x3c,
     0x00, 0x80, 0x0f, 0x1f, 0x1e, 0x00, 0xc0, 0x87, 0x0f, 0x0f, 0x00, 0xe0,
     0xc3, 0x87, 0x07, 0x00, 0xf0, 0xe1, 0xc3, 0x03, 0x00, 0xf0, 0xf0, 0xe1,
     0x01, 0x00, 0x78, 0xf8, 0xf0, 0x00, 0x00, 0x30, 0x7c, 0x78, 0x00, 0x00,
     0x00, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x1f, 0x1e, 0x00, 0x00, 0x80, 0x0f,
     0x0f, 0x78, 0x00, 0xc0, 0x87, 0x07, 0xfc, 0x00, 0xe0, 0xc3, 0x03, 0xfc,
     0x01, 0xf0, 0xe1, 0x01, 0xfc, 0x01, 0xf8, 0xf0, 0x00, 0xfc, 0x00, 0x78,
     0x70, 0x00, 0x78, 0x00, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

const char activeSymbole[] PROGMEM = {
    B00000000,
    B00000000,
    B00011000,
    B00100100,
    B01000010,
    B01000010,
    B00100100,
    B00011000
};

const char inactiveSymbole[] PROGMEM = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B00000000,
    B00000000
};
