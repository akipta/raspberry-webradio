

/*
 *
 * calibri
 *
 * File Name           : calibri_11.h
 * Date                : 16.08.2012
 * Font size in bytes  : 4920
 * Font width          : 10
 * Font height         : 11
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

const uint8_t calibri[] = {
    0x13, 0x38, // size
    0x0A, // width
    0x0B, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x02, 0x01, 0x03, 0x06, 0x04, 0x08, 0x07, 0x01, 0x02, 0x02, 
    0x05, 0x05, 0x02, 0x03, 0x01, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x01, 0x02, 0x05, 0x05, 
    0x05, 0x04, 0x09, 0x07, 0x05, 0x05, 0x06, 0x04, 0x04, 0x06, 
    0x06, 0x01, 0x03, 0x05, 0x04, 0x08, 0x06, 0x06, 0x05, 0x07, 
    0x05, 0x04, 0x05, 0x06, 0x07, 0x0B, 0x06, 0x05, 0x06, 0x02, 
    0x05, 0x02, 0x05, 0x06, 0x02, 0x05, 0x05, 0x04, 0x05, 0x05, 
    0x04, 0x05, 0x05, 0x01, 0x02, 0x04, 0x01, 0x08, 0x05, 0x05, 
    0x05, 0x05, 0x03, 0x04, 0x04, 0x05, 0x05, 0x09, 0x05, 0x05, 
    0x03, 0x03, 0x01, 0x03, 0x05, 0x06, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, // 32
    0x7E, 0x20, // 33
    0x0E, 0x00, 0x0E, 0x00, 0x00, 0x00, // 34
    0x40, 0xE8, 0x5E, 0xE8, 0x5E, 0x08, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, // 35
    0x8C, 0x12, 0x23, 0xC4, 0x00, 0x60, 0x20, 0x00, // 36
    0x0C, 0x12, 0xD2, 0x2C, 0xD0, 0x2C, 0x22, 0xC0, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, // 37
    0xC0, 0x2C, 0x12, 0x32, 0xCC, 0xC0, 0x20, 0x00, 0x20, 0x20, 0x20, 0x00, 0x00, 0x20, // 38
    0x0E, 0x00, // 39
    0xF8, 0x06, 0x20, 0xC0, // 40
    0x06, 0xF8, 0xC0, 0x20, // 41
    0x14, 0x08, 0x3E, 0x08, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x20, 0x20, 0xF8, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x80, 0x60, // 44
    0x20, 0x20, 0x20, 0x00, 0x00, 0x00, // 45
    0x00, 0x20, // 46
    0x00, 0x80, 0x70, 0x0C, 0x03, 0xC0, 0x20, 0x00, 0x00, 0x00, // 47
    0xFC, 0x02, 0x02, 0x02, 0xFC, 0x00, 0x20, 0x20, 0x20, 0x00, // 48
    0x04, 0x02, 0xFE, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, // 49
    0x04, 0x82, 0x42, 0x22, 0x1C, 0x20, 0x20, 0x20, 0x20, 0x20, // 50
    0x84, 0x12, 0x12, 0x12, 0xEC, 0x00, 0x20, 0x20, 0x20, 0x00, // 51
    0x60, 0x58, 0x46, 0xFE, 0x40, 0x00, 0x00, 0x00, 0x20, 0x00, // 52
    0x9E, 0x12, 0x12, 0x12, 0xE2, 0x00, 0x20, 0x20, 0x20, 0x00, // 53
    0xF8, 0x14, 0x12, 0x12, 0xE2, 0x00, 0x20, 0x20, 0x20, 0x00, // 54
    0x02, 0x82, 0x62, 0x1A, 0x06, 0x00, 0x20, 0x00, 0x00, 0x00, // 55
    0xEC, 0x12, 0x12, 0x12, 0xEC, 0x00, 0x20, 0x20, 0x20, 0x00, // 56
    0x1C, 0x22, 0x22, 0xA2, 0x7C, 0x20, 0x20, 0x20, 0x00, 0x00, // 57
    0x08, 0x20, // 58
    0x00, 0x08, 0x80, 0x60, // 59
    0x20, 0x20, 0x50, 0x50, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x50, 0x50, 0x50, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x88, 0x50, 0x50, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x02, 0x72, 0x12, 0x0C, 0x00, 0x20, 0x00, 0x00, // 63
    0xF0, 0x08, 0x64, 0x92, 0x8A, 0x4A, 0xBA, 0x84, 0x78, 0x00, 0x20, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, // 64
    0x80, 0x60, 0x58, 0x46, 0x58, 0x60, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, // 65
    0xFE, 0x12, 0x12, 0x1C, 0xE0, 0x20, 0x20, 0x20, 0x20, 0x00, // 66
    0xFC, 0x02, 0x02, 0x02, 0x84, 0x00, 0x20, 0x20, 0x20, 0x00, // 67
    0xFE, 0x02, 0x02, 0x02, 0x84, 0x78, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, // 68
    0xFE, 0x12, 0x12, 0x12, 0x20, 0x20, 0x20, 0x20, // 69
    0xFE, 0x12, 0x12, 0x12, 0x20, 0x00, 0x00, 0x00, // 70
    0x78, 0x84, 0x02, 0x22, 0x22, 0xE4, 0x00, 0x00, 0x20, 0x20, 0x20, 0x00, // 71
    0xFE, 0x10, 0x10, 0x10, 0x10, 0xFE, 0x20, 0x00, 0x00, 0x00, 0x00, 0x20, // 72
    0xFE, 0x20, // 73
    0x00, 0x00, 0xFE, 0x20, 0x20, 0x00, // 74
    0xFE, 0x10, 0x28, 0xC4, 0x02, 0x20, 0x00, 0x00, 0x00, 0x20, // 75
    0xFE, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, // 76
    0xFE, 0x06, 0x78, 0x80, 0x80, 0x78, 0x06, 0xFE, 0x20, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 0x20, // 77
    0xFE, 0x06, 0x18, 0x60, 0x80, 0xFE, 0x20, 0x00, 0x00, 0x00, 0x20, 0x20, // 78
    0xFC, 0x02, 0x02, 0x02, 0x02, 0xFC, 0x00, 0x20, 0x20, 0x20, 0x20, 0x00, // 79
    0xFE, 0x22, 0x22, 0x22, 0x1C, 0x20, 0x00, 0x00, 0x00, 0x00, // 80
    0xFC, 0x02, 0x02, 0x02, 0x02, 0xFC, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, // 81
    0xFE, 0x22, 0x22, 0x62, 0x9C, 0x20, 0x00, 0x00, 0x00, 0x20, // 82
    0x8C, 0x12, 0x22, 0xC4, 0x00, 0x20, 0x20, 0x00, // 83
    0x02, 0x02, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x20, 0x00, 0x00, // 84
    0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x20, 0x20, 0x20, 0x20, 0x00, // 85
    0x06, 0x18, 0x60, 0x80, 0x60, 0x18, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // 86
    0x06, 0x78, 0x80, 0x60, 0x18, 0x06, 0x18, 0x60, 0x80, 0x78, 0x06, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // 87
    0x02, 0xCC, 0x30, 0x30, 0xCC, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x20, // 88
    0x06, 0x18, 0xE0, 0x18, 0x06, 0x00, 0x00, 0x20, 0x00, 0x00, // 89
    0x82, 0x42, 0x22, 0x12, 0x0A, 0x06, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // 90
    0xFE, 0x02, 0xE0, 0x80, // 91
    0x03, 0x0C, 0x70, 0x80, 0x00, 0x00, 0x00, 0x00, 0x20, 0xC0, // 92
    0x02, 0xFE, 0x80, 0xE0, // 93
    0x10, 0x0C, 0x02, 0x0C, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x01, 0x02, 0x00, 0x00, // 96
    0xC8, 0x28, 0x28, 0x28, 0xF0, 0x00, 0x20, 0x20, 0x20, 0x20, // 97
    0xFE, 0x08, 0x08, 0x08, 0xF0, 0x20, 0x20, 0x20, 0x20, 0x00, // 98
    0xF0, 0x08, 0x08, 0x08, 0x00, 0x20, 0x20, 0x20, // 99
    0xF0, 0x08, 0x08, 0x08, 0xFE, 0x00, 0x20, 0x20, 0x20, 0x20, // 100
    0xF0, 0x28, 0x28, 0x28, 0x30, 0x00, 0x20, 0x20, 0x20, 0x20, // 101
    0x08, 0xFC, 0x0A, 0x0A, 0x00, 0x20, 0x00, 0x00, // 102
    0xB0, 0x48, 0x48, 0x38, 0x08, 0xC0, 0xA0, 0xA0, 0xA0, 0x40, // 103
    0xFE, 0x10, 0x08, 0x08, 0xF0, 0x20, 0x00, 0x00, 0x00, 0x20, // 104
    0xFA, 0x20, // 105
    0x00, 0xFA, 0x80, 0x60, // 106
    0xFE, 0x20, 0xD0, 0x08, 0x20, 0x00, 0x00, 0x20, // 107
    0xFE, 0x20, // 108
    0xF8, 0x10, 0x08, 0x08, 0xF0, 0x08, 0x08, 0xF0, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x20, // 109
    0xF8, 0x10, 0x08, 0x08, 0xF0, 0x20, 0x00, 0x00, 0x00, 0x20, // 110
    0xF0, 0x08, 0x08, 0x08, 0xF0, 0x00, 0x20, 0x20, 0x20, 0x00, // 111
    0xF8, 0x08, 0x08, 0x08, 0xF0, 0xE0, 0x20, 0x20, 0x20, 0x00, // 112
    0xF0, 0x08, 0x08, 0x08, 0xF8, 0x00, 0x20, 0x20, 0x20, 0xE0, // 113
    0xF8, 0x08, 0x08, 0x20, 0x00, 0x00, // 114
    0x30, 0x28, 0x48, 0xC8, 0x20, 0x20, 0x20, 0x00, // 115
    0x08, 0xFC, 0x08, 0x08, 0x00, 0x00, 0x20, 0x20, // 116
    0xF8, 0x00, 0x00, 0x80, 0xF8, 0x00, 0x20, 0x20, 0x00, 0x20, // 117
    0x18, 0x60, 0x80, 0x60, 0x18, 0x00, 0x00, 0x20, 0x00, 0x00, // 118
    0x18, 0x60, 0x80, 0x60, 0x18, 0x60, 0x80, 0x60, 0x18, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // 119
    0x08, 0x90, 0x60, 0x90, 0x08, 0x20, 0x00, 0x00, 0x00, 0x20, // 120
    0x18, 0x60, 0x80, 0x60, 0x18, 0x00, 0xC0, 0x20, 0x00, 0x00, // 121
    0x88, 0x68, 0x18, 0x20, 0x20, 0x20, // 122
    0x20, 0xDC, 0x02, 0x00, 0x60, 0x80, // 123
    0xFE, 0xE0, // 124
    0x02, 0xDC, 0x20, 0x80, 0x60, 0x00, // 125
    0x10, 0x08, 0x18, 0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFE, 0x02, 0x0A, 0x7A, 0x02, 0xFE, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 // 127
    
};
