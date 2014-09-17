//
//  Savings.cpp
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-16.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#include "Savings.h"
#include "Account.h"
#include <iostream>
using namespace std;

Savings::Savings() : Account()
{
    m_savings = Account::get_acctBalance();
    cout << "Savings account allocated successfully." << endl;
}

Savings::Savings(float const& initialDeposit) : Account((float) initialDeposit)
{
    m_savings = Account::get_acctBalance();
    cout << "Savings account allocated successfully." << endl;
}

float Savings::get_savings()
{
    return m_savings;
};
