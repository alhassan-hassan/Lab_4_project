#include <iostream>
#include "RectBlocks.h"
#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //creating a vector array for all the rectBlocks family
    vector<RectBlocks> rect1;
    vector<SqrBaseRectBlocks> square;
    vector<CuboidBlocks> cuboids;
    vector<SphericalBlocks> spheres;
    vector<CylindricalBlocks> cyli_blocks;



    // opening the dataBlocks.dat file
    ifstream file;
    file.open("dataBlocks.dat");
    int width; int height; int length;
    file >> width >> height>>length;

    // looping through the file to retrieve the values for the width, height and length
    while (file >> width >> height>>length){
        //creating  objects of RectBlocks and pushing them into the vector created
        RectBlocks blocks = RectBlocks(width, height, length);
        rect1.push_back(blocks);

        //setting condition for the SqrBaseRectBlocks
        if (width == height) {
            //creating  objects of SqrBaseRectBlocks and the  CylindricalBlocks and pushing them into the vectors created
            SqrBaseRectBlocks squareFamily = SqrBaseRectBlocks(width, length);
            CylindricalBlocks cylBlock = CylindricalBlocks(width, length);

            square.push_back(squareFamily);
            cyli_blocks.push_back(cylBlock);

            //creating  objects of CuboidBlocks and the SphericalBlocks and pushing them into the vectors created
            if (height == length) {
                CuboidBlocks cubes = CuboidBlocks(length);
                SphericalBlocks sphere = SphericalBlocks(length);

                cuboids.push_back(cubes);
                spheres.push_back(sphere);
          }
        }
    }

    //sorting the spherical blocks using their diameters(taken here as the width)
    sort(spheres.begin(), spheres.end(), [ ](const auto& lhs, const auto& rhs ){
        return lhs.width < rhs.length;
   });

   // sorting the cylindrical blocks based on their surface areas
    sort(cyli_blocks.begin(), cyli_blocks.end(),[ ] ( auto& lhs, auto& rhs ){
        return lhs.surfaceArea() < rhs.surfaceArea();
   });

   //outputting the result for the diameter, volume and surface area of all the spherical blocks
   cout<<endl<<"COMPUTATIONS FOR THE SPHERICAL BLOCKS"<<endl;
   cout<<"Diameter      "<<"Volume      "<<"Surface Area"<<endl
    <<"------------------------------------"<<endl;
    for (auto & eachSphere : spheres) {
        cout <<"    "<< eachSphere.width << "        "<<eachSphere.volume()<<
        "        "<<eachSphere.surfaceArea()<<endl;
    }

    cout<<endl;

    //outputting the result for the diameter, volume and surface area of all the cylindrical blocks
    cout<<endl<<"COMPUTATIONS FOR THE CYLINDRICAL BLOCKS"<<endl;
    cout<<"Diameter     Height       Volume       Surface Area"<<endl
    <<"---------------------------------------------------"<<endl;
    for (auto & each_cylinder : cyli_blocks) {
        cout <<"    "<< each_cylinder.width << "          "<<each_cylinder.length<<
        "         "<<each_cylinder.volume()<<
        "         "<<each_cylinder.surfaceArea()<<endl;
    }

    // officially closing the dataBlocks.dat file
    file.close();
    return 0;

    cout << "Hello world!" << endl;
    return 0;
}

