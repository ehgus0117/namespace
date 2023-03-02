//
//  Account.hpp
//  code
//
//  Created by 김도현 on 2023/02/04.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>

class Account
{
private:
    int accID;
    int balance;
    char * cusName;
    
public:
    Account(int ID, int money, char * name);
    Account(const Account & ref);
    Account& operator=(const Account& ref);
    
    int GetAccID() const;
    virtual void Deposit(int money);
    int Withdraw(int money);
    void ShowAccInfo() const;
    ~Account();
};

#endif /* Account_hpp */
