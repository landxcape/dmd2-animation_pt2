#ifndef my_animation_pt2
#define my_animation_pt2

#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <DMD2.h>
#include <DMD_Nepali_pt2.h>

class Animation_pt2
{
public:
    Animation_pt2(DMDFrame &dmdFrame, SPIDMD &dmd, int width, int height);

    uint8_t sunMidday(int, int);

private:
    // DMDFrame &dmdFrame;
    // SPIDMD &dmd;
    DMDFrame &dmd;
    SPIDMD &dmdbright;
    uint16_t width;
    uint16_t height;
    // void delay_engine(unsigned int delay_val);
    void drawPicture(int x, int y, uint16_t p[][], uint16_t rows, uint16_t cols);
};

#endifs