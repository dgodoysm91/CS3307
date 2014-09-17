//
//  Manager.cpp
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-17.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#include "Manager.h"
#include "User.h"
#include <iostream>
using namespace std;


Manager::Manager() : User(1001) {};

User* Manager::get_userID(){
    return &m_userID;
};
