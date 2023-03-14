//
//  BoundArrayMain.cpp
//  code
//
//  Created by 김도현 on 2023/03/14.
//

#include <iostream>
#include "ArrayTemplate.hpp"
#include "point.hpp"
using namespace std;

int main(void)
{
    BoundCheckArray<int> iarr(5);
    for(int i=0; i<5; i++)
        iarr[i] = (i+1)*11;
    for(int i=0; i<5; i++)
        cout<<iarr[i]<<endl;
    
    BoundCheckArray<point> oarr(3);
    oarr[0] = point(3,4);
    oarr[1] = point(5,6);
    oarr[2] = point(7,8);
    for(int i=0; i<oarr.GetArrlen(); i++)
        cout<<oarr[i];
    
    typedef point* POINT_PTR;
    BoundCheckArray<POINT_PTR> parr(3);
    parr[0] = new point(3,4);
    parr[1] = new point(5,6);
    parr[2] = new point(7,8);
    for(int i=0; i<parr.GetArrlen(); i++)
        cout<<*(parr[i]);
    
    delete parr[0];
    delete parr[1];
    delete parr[2];
    return 0;
}
