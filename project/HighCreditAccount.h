//
//  HighCreditAccount.h
//  code
//
//  Created by 김도현 on 2023/02/04.
//

#ifndef HighCreditAccount_h
#define HighCreditAccount_h
#include "NormalAccount.h"
#include "String.hpp"

class HighCreditAccount : public NormalAccount
{
private:
    int specialRate;
public:
    HighCreditAccount(int ID, int money, String name, int rate, int special) : NormalAccount(ID, money, name, rate), specialRate(special) {}
    virtual void Deposit(int money)
    {
        NormalAccount::Deposit(money);
        Account::Deposit(money*(specialRate / 100.0));
    }
};

#endif /* HighCreditAccount_h */
