//
//  User.cpp
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-16.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#include <iostream>
#include "User.h"
using namespace std;

User::User()
{
    m_userID = User::generateUserID();
    cout << "New User created with ID: " << m_userID << endl;
}

User::User(int const& userID)
{
    m_userID = userID;
    cout << "New User created with ID: " << m_userID << endl;
}

int User::generateUserID()
{
    return rand() % 8996 + 1003; // 1001 = manager, 1002 = maintenance (clients = 1003 - 9999)
}

int User::getUserID()
{
    return m_userID;
};




