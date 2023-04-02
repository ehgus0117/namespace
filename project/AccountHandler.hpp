//
//  AccountHandler.hpp
//  code
//
//  Created by 김도현 on 2023/02/04.
//

#ifndef AccountHandler_hpp
#define AccountHandler_hpp
#include "Account.hpp"
#include "BounbCheckArray.h"

class AccountHandler
{
private:
    BounbCheckArray<Account*> accArr;
    int accNum;
public:
    AccountHandler();
    void ShowMenu(void) const;
    void MakeAccount(void);
    void DepositMoney(void);
    void WithdrawMoney(void);
    void ShowAllAccInfo(void) const;
    ~AccountHandler();
    
protected:
    void MakeNormalAccount(void);
    void MakeCreditAccount(void);
};


#endif /* AccountHandler_hpp */
