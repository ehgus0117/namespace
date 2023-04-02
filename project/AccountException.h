//
//  AccountException.h
//  code
//
//  Created by 김도현 on 2023/04/02.
//

#ifndef AccountException_h
#define AccountException_h

class MinusException
{
private:
    int exval; //예외의 원인이 되는 금액
public:
    MinusException(int val) : exval(val) {    }
    void ShowExceptionInfo(void) const
    {
        cout<<"입(출)금약 "<<exval<<"은 유효하지 않습니다!"<<endl;
    }
};

class InsuffException
{
private:
    int balance; //현재 잔액
    int reqval; //출금 요구액
public:
    InsuffException(int val, int req) : balance(val), reqval(req) {}
    void ShowExceptionInfo() const
    {
        cout<<"잔액에서 "<<reqval - balance<<"가(이) 부족합니다!"<<endl;
    }
};

#endif /* AccountException_h */
