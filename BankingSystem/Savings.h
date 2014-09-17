//
//  Savings.h
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-16.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#ifndef __BankingSystem__Savings__
#define __BankingSystem__Savings__

#include <iostream>
#include "Account.h"
using namespace std;

class Savings: public Account
{
    float m_savings;
    
public:
    Savings();
    Savings(float const& initialDeposit);
    float get_savings();
};

#endif /* defined(__BankingSystem__Savings__) */
