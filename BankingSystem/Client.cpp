//
//  Client.cpp
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-16.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#include "Client.h"
#include "Account.h"
#include "Savings.h"
#include "Chequing.h"
#include "User.h"
#include <iostream>
using namespace std;

Client::Client() : User() {};

Chequing* Client::get_chequing()
{
    return &m_chequing;
}

Savings* Client::get_savings()
{
    return &m_savings;
}

User* Client::get_userID()
{
    return &m_userID;
}

void Client::viewInfo()
{
    
};
