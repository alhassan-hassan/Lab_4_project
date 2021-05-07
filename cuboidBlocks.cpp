#include "rectBlocks.h"

//Class constructor
cuboidBlocks :: cuboidBlocks()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

//Parametric constructor
cuboidBlocks::cuboidBlocks(double length)
{
    this->width = length;
    this->height = length;
    this->length = length;
}
