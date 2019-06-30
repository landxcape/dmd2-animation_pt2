#include "Animation_pt2.h"

Animation_pt2::Animation_pt2(DMDFrame &dmd, SPIDMD &dmdbright, int width, int height) : dmd(dmd),
                                                                                        dmdbright(dmdbright),
                                                                                        width(width),
                                                                                        height(height)
{
}

void Animation_pt2::drawPicture(unsigned int rows, unsigned int cols, unsigned int p[][], DMDGraphicsMode mode)
{
    for (int y = 0; y < cols; y++)
    {
        for (int x = 0; x < rows; x++)
        {
            if (p[y][x] == 0)
                dmd.setPixel(x, y, GRAPHICS_OFF);
            else
                dmd.setPixel(x, y, GRAPHICS_ON);
        }
    }
}