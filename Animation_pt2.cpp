#include "Animation_pt2.h"

Animation_pt2::Animation_pt2(DMDFrame &dmd, SPIDMD &dmdbright, int width, int height) : dmd(dmd),
                                                                                        dmdbright(dmdbright),
                                                                                        width(width),
                                                                                        height(height)
{
}

width = dmd.width;
height = dmd.height;

void Animation_pt2::drawPicture(int x, int y, uint16_t p[][], uint16_t rows, uint16_t cols)
{
    for (uint16_t j = 0; j < cols; j++)
    {
        for (uint16_t i = 0; i < rows; i++)
        {
            if (x + i >= 0 && x + i < width && y + j >= 0 && y + j < height)
                if (p[j][i])
                    dmd.setPixel(x + i, y + j, GRAPHICS_ON);
                else
                    dmd.setPixel(x + i, y + j, GRAPHICS_OFF);
        }
    }
}

uint8_t Animation_pt2::sunMidday(int x, int y)
{
    uint8_t rows = 16;
    uint8_t cols = 16;

    bool sun_midday = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                       {0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0},
                       {0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0},
                       {0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0},
                       {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                       {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
                       {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
                       {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                       {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0},
                       {0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0},
                       {0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0},
                       {0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    drawPicture(x, y, sun_midday, rows, cols);
    return cols;
}