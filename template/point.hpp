//
//  point.hpp
//  code
//
//  Created by 김도현 on 2023/03/14.
//

#ifndef point_hpp
#define point_hpp

#include <iostream>
using namespace std;

class point
{
private:
    int xpos, ypos;
public:
    point(int x, int y);
    point(): xpos(0), ypos(0) {}
    friend ostream& operator<<(ostream& os, const point& pos);
};
#endif /* point_hpp */
