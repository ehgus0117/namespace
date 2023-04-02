//
//  String.hpp
//  code
//
//  Created by 김도현 on 2023/03/09.
//

#ifndef String_hpp
#define String_hpp

#include "BankingCommonDecl.h"


class String
{
private:
    int len;
    char * str;
public:
    String();
    String(const char * s);
    String(const String& s);
    ~String();
    String& operator= (const String& s);
    String& operator+= (const String& s);
    bool operator== (const String& s);
    String operator+ (const String& s);
    
    friend ostream& operator<< (ostream& os, const String& s);
    friend istream& operator>> (istream& os, String& s);
};
#endif /* String_hpp */
