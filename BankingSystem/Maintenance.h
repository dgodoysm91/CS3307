//
//  Maintenance.h
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-17.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#ifndef __BankingSystem__Maintenance__
#define __BankingSystem__Maintenance__

#include <iostream>
#include "User.h"

class Maintenance: public User
{
    User m_userID;
    
public:
    Maintenance();
    User* get_userID();
};


#endif /* defined(__BankingSystem__Maintenance__) */

