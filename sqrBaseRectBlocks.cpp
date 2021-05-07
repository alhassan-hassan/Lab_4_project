#include "rectBlocks.h"
#include <cmath>
#include <math.h>

SqrBaseRectBlocks :: SqrBaseRectBlocks()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

SqrBaseRectBlocks::SqrBaseRectBlocks (double width, double length)
{
    this->width = width;
    this->height = width;
    this->length = length;
}

double SqrBaseRectBlocks :: volume()
{
    double volume = this->width * this->width * this->length;
    return volume;
}

double SqrBaseRectBlocks :: surfaceArea()
{
    double surfaceArea = 2* pow(this->width, 2)  + (4 * this->width * this->length);
    return surfaceArea;
}


