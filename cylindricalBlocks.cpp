#include "rectBlocks.h"
#include <cmath>
#include <math.h>

cylindricalBlocks :: cylindricalBlocks()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

cylindricalBlocks::cylindricalBlocks (double width, double length)
{
    this->width = width;
    this->height = width;
    this->length = length;
}

double cylindricalBlocks :: volume()
{
    double volume = 4/3 *  M_PI * pow(this->width/2, 3);
    return volume;
}

double cylindricalBlocks :: surfaceArea()
{
    double surfaceArea = 4 * M_PI * pow(this->width/2, 2);
    return surfaceArea;
}

