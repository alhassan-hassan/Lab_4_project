#include "rectBlocks.h"

CuboidBlocks :: CuboidBlocks()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

CuboidBlocks::CuboidBlocks(double length)
{
    this->width = length;
    this->height = length;
    this->length = length;
}

double CuboidBlocks :: volume()
{
    double volume = this->width * this->height * this->length;
    return volume;
}

double CuboidBlocks :: surfaceArea()
{
    double surfaceArea = 2* (this->width * this->height + this->width * this->length + this->length * this->height  );
    return surfaceArea;
}

