//Loading necessary libraries
#include "rectBlocks.h"

//Constructor
CuboidBlocks :: CuboidBlocks()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

//Parametric constructor
CuboidBlocks::CuboidBlocks(double length)
{
    this->width = length;
    this->height = length;
    this->length = length;
}

//Volume function
double CuboidBlocks :: volume()
{
    double volume = this->width * this->height * this->length;
    return volume;
}

//Area function
double CuboidBlocks :: surfaceArea()
{
    double surfaceArea = 2* (this->width * this->height + this->width * this->length + this->length * this->height  );
    return surfaceArea;
}

