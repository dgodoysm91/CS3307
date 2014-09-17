//
//  Chequing.h
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-16.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#ifndef __BankingSystem__Chequing__
#define __BankingSystem__Chequing__

#include <iostream>
#include "Account.h"
using namespace std;

class Chequing: public Account
{
    float m_chequing;
    
public:
    Chequing();
    Chequing(float const& initialDeposit);
    float get_chequing();
};

#endif /* defined(__BankingSystem__Chequing__) */