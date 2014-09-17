//
//  Client.h
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-16.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#ifndef __BankingSystem__Client__
#define __BankingSystem__Client__
#include <iostream>
#include "User.h"
#include "Chequing.h"
#include "Savings.h"

class Client: public User
{
    User m_userID;
    Chequing m_chequing;
    Savings m_savings;
    
public:
    Client();
    Chequing* get_chequing();
    Savings* get_savings();
    User* get_userID();
    void viewInfo();
};

#endif /* defined(__BankingSystem__Client__) */
