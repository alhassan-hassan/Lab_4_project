#include "rectBlocks.h"
#include <cmath>
#include <math.h>

//Class constructor
CylindricalBlocks :: CylindricalBlocks()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

//Parametric constructor
CylindricalBlocks::CylindricalBlocks (double width, double length)
{
    this->width = width;
    this->height = width;
    this->length = length;
}

//Volume function
double CylindricalBlocks :: volume()
{
    double volume = M_PI * pow(this->width/2, 2) * this->length;
    return volume;
}

//Area function
double CylindricalBlocks :: surfaceArea()
{
    double surfaceArea = 2 * (M_PI * pow(this->width/2, 2) * this->length) + (2 * M_PI * this->width/2 * this->length);
    return surfaceArea;
}

