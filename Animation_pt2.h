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
    void strokeLines_horizontal(int start_x = 0, int start_y = 0, int end_x = 160, int stroke_width = 2, int stroke_length = 4, int stroke_gap = 4);

    // pictures
    uint16_t sun(int, int, String type, String style = "none");
    uint16_t moon(int, int, String type, String style = "none");
    uint16_t star(int, int, String style = "none");
    uint16_t consultancy(int, int, String type, String style = "none");

    // icons
    uint16_t iconArt(int, int, String type, String style = "none");

    // project specifics
    // uint16_t starTailors(int, int, String type, String style = "none");
    uint16_t hardford(int, int, String type, String style = "none");
    // uint16_t diyoFoodland(int, int, String type, String style = "none");
    uint16_t unionLife(int, int, String type, String style = "none");
    uint16_t jyotiLife(int, int, String type, String style = "none");
    // uint16_t nec(int, int, String type, String style = "none");
    // uint16_t nec_new(int, int, String type, String style = "none");
    // uint16_t pkm(int, int, String type, String style = "none");
    // uint16_t rfr(int, int, String type, String style = "none");
    // uint16_t lmmcsl(int, int, String type, String style = "none");
    // uint16_t durga_bhawani(int, int, String type, String style = "none");
    uint16_t mausam_meat_mart(int, int, String type, String style = "none");

private:
    // DMDFrame &dmdFrame;
    // SPIDMD &dmd;
    DMDFrame &dmd;
    SPIDMD &dmdbright;
    uint16_t width;
    uint16_t height;
    uint16_t rows;
    uint16_t cols;
    // void delay_engine(unsigned int delay_val);
    void drawPicture(int x, int y, bool *p, uint16_t rows, uint16_t cols, String style);
};

#endif