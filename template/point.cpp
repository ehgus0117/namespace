//
//  point.cpp
//  code
//
//  Created by κΉλν on 2023/03/14.
//

#include <iostream>
#include "point.hpp"
using namespace std;


point::point(int x, int y): xpos(x), ypos(y) {}

ostream& operator<<(ostream& os, const point& pos)
{
    os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return os;
}
