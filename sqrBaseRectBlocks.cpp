//loading rectBlocks header file and math libraries
#include "rectBlocks.h"
#include <cmath>
#include <math.h>

//Constructor
SqrBaseRectBlocks :: SqrBaseRectBlocks()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

//Parametric constructor
SqrBaseRectBlocks::SqrBaseRectBlocks (double width, double length)
{
    this->width = width;
    this->height = width;
    this->length = length;
}

//Volume function
double SqrBaseRectBlocks :: volume()
{
    double volume = this->width * this->width * this->length;
    return volume;
}

//Area function
double SqrBaseRectBlocks :: surfaceArea()
{
    double surfaceArea = 2* pow(this->width, 2)  + (4 * this->width * this->length);
    return surfaceArea;
}


