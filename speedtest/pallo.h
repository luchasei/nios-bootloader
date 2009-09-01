#define pallo_png_width 16
#define pallo_png_height 16

static const uint16_t pallo_png_palette[] = {
0x6000, 0x6000, 0x6000, 0x6800, 0x6800, 0x6800, 0x7000, 0x7000, 
0x7000, 0x7000, 0x7800, 0x7800, 0x7800, 0x7800, 0x7800, 0x7800, 
0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8800, 0x8800, 
0x8800, 0x8800, 0x8800, 0x9000, 0x9000, 0x9000, 0x9000, 0x9000, 
0x9800, 0x9800, 0x9800, 0x9800, 0x9800, 0x9800, 0xa000, 0xa000, 
0xa000, 0xa000, 0xa000, 0xa000, 0xa800, 0xa800, 0xa800, 0xa800, 
0xa800, 0xa800, 0xb000, 0xb000, 0xb000, 0xb000, 0xb000, 0xb800, 
0xb800, 0xb800, 0xb800, 0xb800, 0xb800, 0xb800, 0xc000, 0xc000, 
0xc000, 0xc000, 0xc000, 0xc800, 0xc800, 0xc800, 0xc800, 0xc800, 
0xd000, 0xd000, 0xd000, 0xd000, 0xd800, 0xd800, 0xd800, 0xd800, 
0xd800, 0xd800, 0xd800, 0xe000, 0xe000, 0xe800, 0xe800, 0xe800, 
0xe800, 0xf000, 0xf800, 0xfc10, 0xffff, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
};

static const unsigned char pallo_png_data[] = {
0x13, 0x5c, 0x87, 0x5b, 0x38, 0x3a, 0x39, 
0x35, 0x2e, 0x27, 0x5b, 0x05, 0x5c, 0x8b, 0x5b, 
0x37, 0x40, 0x43, 0x45, 0x44, 0x41, 0x38, 0x2f, 
0x26, 0x1c, 0x5b, 0x03, 0x5c, 0x8b, 0x36, 0x41, 
0x47, 0x4c, 0x4f, 0x4b, 0x47, 0x42, 0x36, 0x2c, 
0x20, 0x17, 0x02, 0x5c, 0x8d, 0x5b, 0x3b, 0x45, 
0x4e, 0x54, 0x55, 0x54, 0x4d, 0x45, 0x3b, 0x30, 
0x24, 0x19, 0x5b, 0x01, 0x5c, 0x8d, 0x32, 0x3d, 
0x47, 0x52, 0x58, 0x5a, 0x57, 0x52, 0x47, 0x3e, 
0x31, 0x26, 0x1b, 0x10, 0x01, 0x5c, 0x8d, 0x31, 
0x3c, 0x46, 0x50, 0x56, 0x59, 0x56, 0x51, 0x46, 
0x3d, 0x31, 0x25, 0x1a, 0x0f, 0x01, 0x5c, 0x8d, 
0x2d, 0x39, 0x43, 0x4a, 0x52, 0x53, 0x52, 0x4a, 
0x44, 0x39, 0x2d, 0x21, 0x18, 0x0e, 0x01, 0x5c, 
0x8d, 0x2a, 0x33, 0x3d, 0x44, 0x48, 0x49, 0x48, 
0x44, 0x3d, 0x33, 0x29, 0x1f, 0x16, 0x0a, 0x01, 
0x5c, 0x8d, 0x22, 0x2c, 0x34, 0x3a, 0x3f, 0x42, 
0x40, 0x3b, 0x34, 0x2c, 0x22, 0x1a, 0x11, 0x07, 
0x01, 0x5c, 0x8d, 0x1c, 0x23, 0x2b, 0x2f, 0x33, 
0x35, 0x33, 0x30, 0x2b, 0x23, 0x1c, 0x14, 0x0a, 
0x03, 0x01, 0x5c, 0x8d, 0x5b, 0x1b, 0x20, 0x25, 
0x28, 0x29, 0x28, 0x25, 0x20, 0x1b, 0x15, 0x0c, 
0x05, 0x5b, 0x02, 0x5c, 0x8b, 0x12, 0x17, 0x1a, 
0x1d, 0x1e, 0x1d, 0x1b, 0x17, 0x12, 0x0b, 0x06, 
0x01, 0x03, 0x5c, 0x8b, 0x5b, 0x0c, 0x10, 0x12, 
0x13, 0x12, 0x10, 0x0d, 0x09, 0x04, 0x00, 0x5b, 
0x05, 0x5c, 0x87, 0x5b, 0x07, 0x08, 0x07, 0x06, 
0x04, 0x02, 0x5b, 0x13, 0x5c, };