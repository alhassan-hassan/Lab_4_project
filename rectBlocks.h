#ifndef RectBlocks_H_INCLUDED
#define RectBlocks_H_INCLUDED

class RectBlocks
{
    public:
        double width;
        double length;
        double height;
        double volume();
        double surfaceArea();
        RectBlocks();
        RectBlocks( double width, double length, double height);
};


class SqrBaseRectBlocks : public RectBlocks
{
    public :
        double volume();
        double surfaceArea();
        SqrBaseRectBlocks();
        SqrBaseRectBlocks(double width, double length);
};

class CylindricalBlocks : public SqrBaseRectBlocks
{
    public :
        double volume();
        double surfaceArea();
        CylindricalBlocks();
        CylindricalBlocks(double width, double length);
};

class CuboidBlocks : public SqrBaseRectBlocks
{
    public :
        double volume();
        double surfaceArea();
        CuboidBlocks();
        CuboidBlocks(double length);
};

class SphericalBlocks : public CuboidBlocks
{
    public :
        double volume();
        double surfaceArea();
        SphericalBlocks();
        SphericalBlocks(double length);
};

#endif // RectBlocks_H_INCLUDED
