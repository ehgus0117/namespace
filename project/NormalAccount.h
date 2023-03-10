//
//  NormalAccount.h
//  code
//
//  Created by κΉλν on 2023/02/04.
//

#ifndef NormalAccount_h
#define NormalAccount_h
#include "Account.hpp"
#include "String.hpp"

class NormalAccount : public Account
{
private:
    int interRate;
public:
    NormalAccount(int ID, int money, String name, int rate) : Account(ID, money, name), interRate(rate) {}
    virtual void Deposit(int money)
    {
        Account::Deposit(money);
        Account::Deposit(money*(interRate / 100.0));
    }
};

#endif /* NormalAccount_h */
