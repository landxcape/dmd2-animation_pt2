#ifndef Animation_pt2
#define Animation_pt2

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

private:
    // DMDFrame &dmdFrame;
    // SPIDMD &dmd;
    DMDFrame &dmd;
    SPIDMD &dmdbright;
    int width;
    int height;
    void delay_engine(unsigned int delay_val);
    void drawPicture(unsigned int rows, unsigned int cols, unsigned int p[][]);
};

#endifs