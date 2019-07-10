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

    // effects
    void fadingEffect();
    void cleaningCurtain();

    // pictures
    uint8_t sun(int, int, String);
    uint8_t moon(int, int, String);
    uint8_t star(int, int);

    // static messages
    uint8_t starTailor(int, int, String);

private:
    // DMDFrame &dmdFrame;
    // SPIDMD &dmd;
    DMDFrame &dmd;
    SPIDMD &dmdbright;
    uint16_t width;
    uint16_t height;
    uint8_t rows;
    uint8_t cols;
    // void delay_engine(unsigned int delay_val);
    void drawPicture(int x, int y, bool *p, uint8_t rows, uint8_t cols);
};

#endif