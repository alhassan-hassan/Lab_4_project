#include "rectBlocks.h"
#include <cmath>
#include <math.h>

sphericalBlocks  :: sphericalBlocks ()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

sphericalBlocks :: sphericalBlocks (double length)
{
    this->width = length;
    this->height = length;
    this->length = length;
}


double sphericalBlocks :: volume()
{
    double volume = 4/3 *  M_PI * pow(this->width/2, 3);
    return volume;
}

double sphericalBlocks :: surfaceArea()
{
    double surfaceArea = 4 * M_PI * pow(this->width/2, 2);
    return surfaceArea;
}
