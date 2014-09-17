//
//  Maintenance.cpp
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-17.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#include "Maintenance.h"
#include "User.h"
#include <iostream>
using namespace std;


Maintenance::Maintenance() : User(1002) {};

User* Maintenance::get_userID(){
    return &m_userID;
};
