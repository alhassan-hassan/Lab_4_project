#ifndef RectBlocks_H_INCLUDED
#define RectBlocks_H_INCLUDED

//RectBlocks class
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

//Square Prism Blocks which inherit RectBlocks class
class SqrBaseRectBlocks : public RectBlocks
{
    public :
        double volume();
        double surfaceArea();
        SqrBaseRectBlocks();
        SqrBaseRectBlocks(double width, double length);
};

//CylindricalBlocks class which inherit SqrBaseRectBlocks class
class CylindricalBlocks : public SqrBaseRectBlocks
{
    public :
        double volume();
        double surfaceArea();
        CylindricalBlocks();
        CylindricalBlocks(double width, double length);
};

//CuboidBlocks class which inherit SqrBaseRectBlocks class
class CuboidBlocks : public SqrBaseRectBlocks
{
    public :
        double volume();
        double surfaceArea();
        CuboidBlocks();
        CuboidBlocks(double length);
};

//SphericalBlocks class which inherit CuboidBlocks class
class SphericalBlocks : public CuboidBlocks
{
    public :
        double volume();
        double surfaceArea();
        SphericalBlocks();
        SphericalBlocks(double length);
};

#endif // RectBlocks_H_INCLUDED
