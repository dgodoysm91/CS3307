//
//  User.h
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-16.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#ifndef __BankingSystem__User__
#define __BankingSystem__User__
#include <iostream>
using namespace std;

class User
{
    int m_userID;
    
public:
    User();
    User(int const& userID);
    int getUserID();
    int generateUserID();
};

#endif /* defined(__BankingSystem__User__) */
