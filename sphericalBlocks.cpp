//loading libraries and rectBlocks header file
#include "rectBlocks.h"
#include <cmath>
#include <math.h>

//Constructor
SphericalBlocks  :: SphericalBlocks ()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

//Parametric Constructor
SphericalBlocks :: SphericalBlocks (double length)
{
    this->width = length;
    this->height = length;
    this->length = length;
}

//Volume function
double SphericalBlocks :: volume()
{
    double volume = 4/3 *  M_PI * pow(this->width/2, 3);
    return volume;
}

//Area function
double SphericalBlocks :: surfaceArea()
{
    double surfaceArea = 4 * M_PI * pow(this->width/2, 2);
    return surfaceArea;
}
