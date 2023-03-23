//
//  PointTemplate.h
//  code
//
//  Created by 김도현 on 2023/03/23.
//

#ifndef PointTemplate_h
#define PointTemplate_h

template <typename T>
class point
{
private:
    T xpos, ypos;
public:
    point(T x=0, T y=0);
    void showposition() const;
};

template <typename T>
point<T>::point(T x, T y) : xpos(x), ypos(y) {}

template <typename T>
void point<T>::showposition()const
{
    cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
}


#endif /* PointTemplate_h */
