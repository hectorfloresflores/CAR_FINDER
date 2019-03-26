
#include "LCDNokia5110Images.h"


const uint8 ITESO[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x20, 0x20, 0x30, 0x30, 0x30, 0x38, 0x38, 0x3C, 0x3C, 0x7C, 0x7C, 0x7C, 0xFC, 0xFE, 0xFE,
		0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE,
		0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x7C, 0x7C, 0x7C, 0x7C, 0x3C, 0x38, 0x38, 0x30, 0x30,
		0x30, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xF8, 0xE0,
		0x80, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
		0xFE, 0xFE, 0xFC, 0xFC, 0xFC, 0xFD, 0xF9, 0x79, 0x7B, 0x33, 0xB7, 0x87, 0x87, 0xCF, 0xCF, 0xC7,
		0x87, 0xB7, 0x37, 0x73, 0x7B, 0xF9, 0xFD, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1E, 0x04, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xFE, 0xFC,
		0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x01, 0x03, 0x07,
		0x0F, 0x1F, 0x1F, 0x0F, 0x67, 0xF7, 0xF3, 0x9B, 0x9D, 0x9C, 0x9C, 0x9E, 0x9F, 0x9F, 0x9F, 0x9F,
		0x9F, 0x00, 0x00, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9E, 0x9C, 0x9C, 0x9D, 0x9B, 0xF3, 0xF7, 0x67,
		0x4F, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0xF0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0x00, 0x00, 0x1F, 0x7F, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x9F, 0xCF, 0xE7, 0xF3, 0xFB,
		0xFD, 0xFC, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF0, 0xF0, 0xE0, 0xC0, 0xC1, 0x83, 0x83, 0x07, 0x07,
		0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x70, 0x70, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x07, 0x07, 0x83, 0x83,
		0xC1, 0xC0, 0xE0, 0xF0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFE, 0xFC, 0xF9, 0xF3, 0xF3, 0xC7, 0x8F,
		0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x00,
		0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x3F, 0x0F, 0x03, 0x00, 0x08, 0x1E, 0x3F,
		0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x0F, 0x0F, 0x0F, 0x87,
		0x87, 0x83, 0xC3, 0xC3, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xC2,
		0xC3, 0xC3, 0x87, 0x87, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F,
		0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1C, 0x00, 0x01, 0x03, 0x0F, 0x3F, 0x3F, 0x1F, 0x0F, 0x07, 0x03,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x0C, 0x0C, 0x0C, 0x1C, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E,
		0x3F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
		0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x3E, 0x3E, 0x1E, 0x1E, 0x1E,
		0x1C, 0x1C, 0x0C, 0x0C, 0x0C, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		};

const unsigned char WELCOME [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xF0, 0xF0, 0x38, 0x78,
0xF8, 0x78, 0x70, 0x70, 0x60, 0xE0, 0xE0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xE0, 0xE0, 0x60,
0x70, 0x70, 0x78, 0xF8, 0x78, 0x38, 0xB0, 0xF0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x20, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80,
0x80, 0x01, 0x01, 0x00, 0xC0, 0xC0, 0xC0, 0x40, 0x20, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x40, 0xC0,
0xC0, 0x80, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
0x80, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xC0, 0xC0, 0xC0,
0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0xC1, 0xC1, 0x00, 0x00, 0x00, 0x00, 0x80,
0xC0, 0xC0, 0x40, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x01, 0x0F, 0xFF, 0xF0, 0x80, 0xF0,
0x7E, 0x1F, 0x07, 0x1F, 0x7C, 0xF0, 0xC0, 0xFE, 0x7F, 0x0F, 0x01, 0x00, 0xFE, 0xFF, 0xFF, 0x19,
0x18, 0x18, 0x18, 0xEC, 0xCF, 0xC7, 0x43, 0x00, 0x8F, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
0x00, 0x00, 0x00, 0xC3, 0xC1, 0x80, 0x3E, 0xFF, 0xFF, 0xE7, 0x00, 0x00, 0x00, 0xC1, 0xFF, 0xFF,
0x3E, 0x0F, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x80, 0xFF, 0xFF,
0x10, 0xFE, 0xFF, 0xFF, 0x19, 0x18, 0x18, 0x08, 0xEF, 0xCF, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00,
0x01, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 0x87, 0x07, 0x00, 0x00, 0x00, 0x00,
0x00, 0x01, 0x03, 0x03, 0x06, 0x06, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x00,
0x00, 0x01, 0x03, 0x03, 0x07, 0x07, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x01, 0x03, 0x03, 0x06,
0x07, 0x03, 0x03, 0x00, 0x00, 0x06, 0x07, 0x07, 0x00, 0x00, 0x00, 0x06, 0x07, 0x07, 0x07, 0x00,
0x00, 0x87, 0x87, 0x07, 0x00, 0x00, 0x01, 0x03, 0x02, 0x06, 0x06, 0x03, 0x03, 0x01, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0F, 0x0D, 0x1C, 0x1F,
0x1F, 0x1E, 0x0F, 0x0F, 0x06, 0x03, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x03, 0x06,
0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x1C, 0x0F, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char BLOQUED [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xFE, 0xFE, 0x42, 0x42, 0x66, 0xFE, 0x9C, 0x80, 0x00,
0x00, 0x02, 0xFE, 0xFE, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0x0C, 0x06, 0x02, 0x02,
0x02, 0x06, 0x0C, 0xF8, 0xF0, 0x00, 0xF0, 0xF8, 0x0C, 0x02, 0x02, 0x02, 0x02, 0x06, 0x0C, 0xFC,
0xF0, 0x00, 0x02, 0xFE, 0xFE, 0x02, 0x00, 0x00, 0x00, 0x02, 0xFE, 0xFE, 0x02, 0x00, 0x00, 0x02,
0xFE, 0xFE, 0x42, 0x42, 0xF2, 0x06, 0x00, 0x00, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x06,
0x0C, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08,
0x0C, 0x0F, 0x07, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x0E, 0x00, 0x01, 0x03,
0x06, 0x0C, 0x08, 0x08, 0x08, 0x08, 0x06, 0x03, 0x01, 0x00, 0x01, 0x07, 0x0E, 0x08, 0x18, 0x38,
0x78, 0x7C, 0x7E, 0x67, 0x21, 0x00, 0x00, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x04, 0x02, 0x0F, 0x0F,
0x08, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x0C, 0x04, 0x00, 0x08, 0x0F, 0x0F, 0x08,
0x08, 0x08, 0x08, 0x0C, 0x06, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};



uint8* get_welcomeLogo(){
	return WELCOME;
}

uint8* get_bloquedLogo(){
	return BLOQUED;
}

