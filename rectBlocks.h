#ifndef RECTBLOCKS_H_INCLUDED
#define RECTBLOCKS_H_INCLUDED

class rectBlocks
{
    public:
        double width;
        double length;
        double height;
        rectBlocks();
        rectBlocks( double width, double length, double height);
};


class sqrBaseRectBlocks : public rectBlocks
{
    public :
        double width;
        double length;
        double height;
        sqrBaseRectBlocks();
        sqrBaseRectBlocks(double width, double length);
};

class cylindricalBlocks : public sqrBaseRectBlocks
{
    public :
        double width;
        double length;
        double height;
        cylindricalBlocks();
        cylindricalBlocks(double width, double length);
        double volume();
        double surfaceArea();
};

class cuboidBlocks : public sqrBaseRectBlocks
{
    public :
        double width;
        double length;
        double height;
        cuboidBlocks();
        cuboidBlocks(double length);
};

class sphericalBlocks : public cuboidBlocks
{
    public :
        double width;
        double length;
        double height;
        sphericalBlocks();
        sphericalBlocks(double length);
        double volume();
        double surfaceArea();
};

#endif // RECTBLOCKS_H_INCLUDED
