//
//  AccountHandler.hpp
//  code
//
//  Created by κΉλν on 2023/02/04.
//

#ifndef AccountHandler_hpp
#define AccountHandler_hpp
#include "Account.hpp"
#include "AccountArray.hpp"

class AccountHandler
{
private:
    BoundCheckAccountPtrArray accArr;
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
