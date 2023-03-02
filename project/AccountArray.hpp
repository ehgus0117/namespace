//
//  AccountArray.hpp
//  code
//
//  Created by 김도현 on 2023/03/02.
//

#ifndef AccountArray_hpp
#define AccountArray_hpp

#include "Account.hpp"
typedef Account * ACCOUNT_PTR;

class BoundCheckAccountPtrArray
{
private:
    ACCOUNT_PTR * arr;
    int arrlen;
    BoundCheckAccountPtrArray(const BoundCheckAccountPtrArray& arr) {}
    BoundCheckAccountPtrArray& operator=(const BoundCheckAccountPtrArray& arr)
    { return* this; }
    
public:
    BoundCheckAccountPtrArray(int len=100);
    ACCOUNT_PTR& operator[] (int idx);
    ACCOUNT_PTR operator[] (int idx)const;
    int GetArrLen() const;
    ~BoundCheckAccountPtrArray();
};

#endif /* AccountArray_hpp */
