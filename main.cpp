#include <iostream>
#include "rectBlocks.h"
#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<rectBlocks> rect1;
    vector<sqrBaseRectBlocks> square;
    vector<cuboidBlocks> cuboids;
    vector<sphericalBlocks> spheres;
    vector<cylindricalBlocks> cyli_blocks;



    ifstream file;
    file.open("dataBlocks.dat");
    int width; int height; int length;
    file >> width >> height>>length;

    while (file >> width >> height>>length){
        rectBlocks blocks = rectBlocks(width, height, length);
        rect1.push_back(blocks);

        if (width == height) {
            sqrBaseRectBlocks squareFamily = sqrBaseRectBlocks(width, length);
            cylindricalBlocks cylBlock = cylindricalBlocks(width, length);

            square.push_back(squareFamily);
            cyli_blocks.push_back(cylBlock);

            if (height == length) {
                cuboidBlocks cubes = cuboidBlocks(length);
                sphericalBlocks sphere = sphericalBlocks(length);

                cuboids.push_back(cubes);
                spheres.push_back(sphere);
          }
        }
    }

    sort(spheres.begin(), spheres.end(), [ ](const auto& lhs, const auto& rhs ){
        return lhs.width < rhs.length;
   });

    sort(cyli_blocks.begin(), cyli_blocks.end(),[ ] (const auto& lhs, const auto& rhs ){
        return lhs.width < rhs.width;
   });

   cout<<endl<<"COMPUTATIONS FOR THE SPHERICAL BLOCKS"<<endl;
   cout<<"Diameter      "<<"Volume      "<<"Surface Area"<<endl
    <<"------------------------------------"<<endl;
    for (auto & eachSphere : spheres) {
        cout <<"    "<< eachSphere.width << "        "<<eachSphere.volume()<<
        "        "<<eachSphere.surfaceArea()<<endl;
    }

    cout<<endl;

    cout<<endl<<"COMPUTATIONS FOR THE CYLINDRICAL BLOCKS"<<endl;
    cout<<"Diameter     Height       Volume       Surface Area"<<endl
    <<"---------------------------------------------------"<<endl;
    for (auto & each_cylinder : cyli_blocks) {
        cout <<"    "<< each_cylinder.width << "          "<<each_cylinder.length<<
        "         "<<each_cylinder.volume()<<
        "         "<<each_cylinder.surfaceArea()<<endl;
    }

    file.close();
    return 0;

    cout << "Hello world!" << endl;
    return 0;
}

