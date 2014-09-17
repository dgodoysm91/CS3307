//
//  Account.cpp
//  BankingSystem
//
//  Created by Diana Godoy on 2014-09-16.
//  Copyright (c) 2014 Diana Godoy. All rights reserved.
//

#include <iostream>
#include "Account.h"
using namespace std;

const float Account::minValue = 1000.00f; // min Account Balance requirement

Account::Account()
{
    Account::set_acctBalance(0.00);
}

Account::Account(float const& initialDeposit)
{
    if (initialDeposit < minValue)
    {
        cerr << "Account requires a minimum of " << minValue << " for activation " << endl;
        return;
    }
    else
    {
        Account::set_acctBalance(initialDeposit);
        Account::set_status(true);
        // cout << "Account has been opened with " << minValue << " balance. " << endl;
    }
    
}

float Account::get_acctBalance()
{
    if (!Account::get_status())
    {
        cerr << "Account is not yet activated. " << endl;
        cerr << "Account must first be activated by a manager before a balance inquiry can be performed" << endl;
    }
    return m_acctBalance;
}

bool Account::get_status()
{
    return m_status;
}

void Account::set_acctBalance(float const& amt)
{
    if (!Account::get_status())
    {
        cerr << "Account is not yet activated. " << endl;
        cerr << "Account must first be activated by a manager before the balance can be set." << endl;
        return;
    }
    m_acctBalance = amt;
    return;
}

void Account::set_status(bool const& status)
{
    m_status= status;
}

void Account::makeWithdrawal(float const& amt)
{
    float currBalance = Account::get_acctBalance();
    float newBalance = currBalance - amt;
    Account::set_acctBalance(newBalance);
    cout << "Success. Withdrew $" << amt << endl;
    cout << "New account balance: $" << newBalance << endl;
    return;
}

void Account::withdrawFunds(float const& amt)
{
    cout << "Attempting to withdraw funds..." << endl;
    if (!Account::get_status())
    {
        cerr << "Account is not yet activated. " << endl;
        cerr << "Account must first be activated by a manager before funds can be withdrawn" << endl;
        return;
    }
    float currBalance = Account::get_acctBalance();
    float availableFunds = currBalance - amt;
    
    if (amt > currBalance)
    {
        cerr << "Insufficient funds. Cannot withdraw $" << amt;
        return;
    }
    else if (availableFunds < minValue)
    {
        string userConfirm;
        cout << "Withdrawing $" << amt << " will take account balance below minimum of $" << minValue;
        cout << ". A charge of $2.00 will apply." << endl;
        cout << "Are you sure you wish to proceed? [Y/N]  ";
        cin >> userConfirm;
        if (!cin)
        {
            cerr << "Invalid response. Cancelling the withdraw request." << endl;
            return;
        }
        else if (userConfirm.compare("Y") == 0)
        {
            cout << "Proceeding with request." << endl;
            return Account::makeWithdrawal(amt);
        }
        else
        {
            cout << "Cancelling the withdraw request." << endl;
            return;
        }
    }
    else
    {
        return Account::makeWithdrawal(amt);
    }
}

void Account::depositFunds(float const& amt)
{
    cout << "Attempting to deposit funds..." << endl;
    if (!Account::get_status())
    {
        cerr << "Account is not yet activated. " << endl;
        cerr << "Account must first be activated by a manager before funds can be deposited" << endl;
        return;
    }
    Account::set_acctBalance(Account::get_acctBalance() + amt);
    return;
};