//
//  Account.hpp
//  code
//
//  Created by 김도현 on 2023/02/04.
//

#ifndef Account_hpp
#define Account_hpp

#include "String.hpp"

class Account
{
private:
    int accID;
    int balance;
    String cusName;
    
public:
    Account(int ID, int money, String name);
    int GetAccID() const;
    virtual void Deposit(int money);
    int Withdraw(int money);
    void ShowAccInfo() const;
};

#endif /* Account_hpp */
