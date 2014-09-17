//
//  Account.h
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-16.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//
#ifndef __BankingSystem__Account__
#define __BankingSystem__Account__

#include <iostream>
using namespace std;

class Account
{
    float m_acctBalance;
    bool m_status = false; //default value false for non-active account
    
private:
    static const float minValue;
    
public:
    Account();
    Account(float const& initialDeposit);
    float get_acctBalance();
    void set_acctBalance(float const& amt);
    bool get_status();
    void set_status(bool const& val);
    void makeWithdrawal(float const& amt);
    void withdrawFunds(float const& amt);
    void depositFunds(float const& amt);
};


#endif /* defined(__BankingSystem__Account__) */