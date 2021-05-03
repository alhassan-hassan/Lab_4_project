#include "rectBlocks.h"

cuboidBlocks :: cuboidBlocks()
{
    this->width = 0;
    this->length = 0;
    this->height = 0;
}

cuboidBlocks::cuboidBlocks(double length)
{
    this->width = length;
    this->height = length;
    this->length = length;
}
