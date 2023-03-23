//
//  BoundArrayMain.cpp
//  code
//
//  Created by 김도현 on 2023/03/23.
//

#include <iostream>
#include "ArrayTemplate.hpp"
#include "PointTemplate.hpp"
using namespace std;


int main(void)
{
    BoundCheckArray<point<int>> oarr1(3);
    oarr1[0] = point<int>(3,4);
    oarr1[1] = point<int>(5,6);
    oarr1[2] = point<int>(7,8);
    
    for(int i=0; i<oarr1.GetArrLen(); i++)
        oarr1[i].showposition();
    
    BoundCheckArray<point<double>> oarr2(3);
    oarr2[0] = point<double>(3.14, 4.31);
    oarr2[1] = point<double>(5.09, 6.07);
    oarr2[2] = point<double>(7.82, 8.54);
    
    for(int i=0; i<oarr2.GetArrLen(); i++)
        oarr2[i].showposition();
    
    typedef point<int>* POINT_PTR;
    BoundCheckArray<POINT_PTR> oparr(3);
    oparr[0] = new point<int>(11, 12);
    oparr[1] = new point<int>(13, 14);
    oparr[2] = new point<int>(15, 16);
    
    for(int i=0; i<oparr.GetArrLen(); i++)
        oparr[i]->showposition();
    delete oparr[0]; delete oparr[1]; delete oparr[2];
    return 0;
}
