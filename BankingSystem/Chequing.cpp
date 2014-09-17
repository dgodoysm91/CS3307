//
//  Chequing.cpp
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-16.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#include "Chequing.h"
#include "Account.h"
#include <iostream>
using namespace std;

Chequing::Chequing() : Account()
{
    m_chequing = Account::get_acctBalance();
    cout << "Chequing account allocated successfully." << endl;
}

Chequing::Chequing(float const& initialDeposit) : Account((float) initialDeposit)
{
    m_chequing = Account::get_acctBalance();
    cout << "Chequing account allocated successfully." << endl;
}

float Chequing::get_chequing()
{
    return m_chequing;
};
