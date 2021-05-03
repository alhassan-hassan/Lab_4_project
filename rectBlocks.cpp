#include "rectBlocks.h"

rectBlocks :: rectBlocks()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

rectBlocks::rectBlocks(double width, double length, double height)
{
    this->width = width;
    this->height = height;
    this->length = length;
}
