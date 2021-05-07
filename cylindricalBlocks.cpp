#include "rectBlocks.h"
#include <cmath>
#include <math.h>

CylindricalBlocks :: CylindricalBlocks()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

CylindricalBlocks::CylindricalBlocks (double width, double length)
{
    this->width = width;
    this->height = width;
    this->length = length;
}

double CylindricalBlocks :: volume()
{
    double volume = M_PI * pow(this->width/2, 2) * this->length;
    return volume;
}

double CylindricalBlocks :: surfaceArea()
{
    double surfaceArea = 2 * (M_PI * pow(this->width/2, 2) * this->length) + (2 * M_PI * this->width/2 * this->length);
    return surfaceArea;
}

