//
//  BankingCommonDec1.h
//  code
//
//  Created by 김도현 on 2023/02/04.
//

#ifndef BankingCommonDec1_h
#define BankingCommonDec1_h

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

const int NAME_LEN=20;

//프로그램 사용자의 선택 메뉴
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

//신용 등급
enum {LEVEL_A=7, LEVEL_B=4, LEVEL_C=2};

//계좌의 종류
enum {NORMAL =1, CREDIT =2};


#endif /* BankingCommonDec1_h */
