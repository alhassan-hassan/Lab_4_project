#include "rectBlocks.h"

sqrBaseRectBlocks :: sqrBaseRectBlocks()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

sqrBaseRectBlocks::sqrBaseRectBlocks (double width, double length)
{
    this->width = width;
    this->height = width;
    this->length = length;
}
