#include "Animation_pt2.h"

Animation_pt2::Animation_pt2(DMDFrame &dmd, SPIDMD &dmdbright, int width, int height) : dmd(dmd),
                                                                                        dmdbright(dmdbright),
                                                                                        width(width),
                                                                                        height(height)
{
}

void Animation_pt2::drawPicture(int x, int y, bool *p, uint8_t rows, uint8_t cols)
{
    width = dmd.width;
    height = dmd.height;
    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i < cols; i++)
        {
            if (x + i >= 0 && x + i < width && y + j >= 0 && y + j < height)
            {
                if (*(p + j * cols + i))
                    dmd.setPixel(x + i, y + j, GRAPHICS_ON);
                else
                    dmd.setPixel(x + i, y + j, GRAPHICS_OFF);
            }
        }
    }
}

uint8_t Animation_pt2::sunMidday(int x, int y)
{
    uint8_t rows = 16;
    uint8_t cols = 16;

    bool sun_midday[16][16] = {{0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                               {0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0},
                               {0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0},
                               {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
                               {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
                               {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0},
                               {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1},
                               {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
                               {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
                               {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1},
                               {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0},
                               {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
                               {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
                               {0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0},
                               {0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0},
                               {0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0}};
    drawPicture(x, y, (bool *)sun_midday, rows, cols);
    return cols;
}