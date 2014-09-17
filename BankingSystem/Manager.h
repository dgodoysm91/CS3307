//
//  Manager.h
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-17.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#ifndef __BankingSystem__Manager__
#define __BankingSystem__Manager__

#include <iostream>
#include "User.h"

class Manager: public User
{
    User m_userID;
    
public:
    Manager();
    User* get_userID();
};

#endif /* defined(__BankingSystem__Manager__) */

