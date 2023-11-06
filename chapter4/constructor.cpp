#include<iostream>
#include"Account.h"
using namespace std;
int main()
{
    Account account1("Ali",24,1000),account2("ehsan",20);
    cout<<"the balance of account "<<account1.getName() <<"is : "<<account1.getBalance()<<endl;
    cout<<"the balance of account "<<account2.getName() <<"is : "<<account2.getBalance()<<endl;
}