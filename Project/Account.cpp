#include<iostream>
#include "Account.h"
using namespace std;

int main ()
{
   Account myAcocount;
   cout<< "     " <<" ///Initial name of myAccount/// "<<endl;
   cout<<"Please enter the name of account : ";
   string newName;
   getline(cin,newName);
   myAcocount.setName(newName);
   cout<<"New Name of Account is : " <<myAcocount.getName()<<endl;
}