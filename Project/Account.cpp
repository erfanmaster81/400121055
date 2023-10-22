#include<iostream>
#include "Account.h"
using namespace std;

int main ()
{
   Account myAcocount1("erfan"),myAcocount2("Amin");
   cout<< "     " <<" ///Initial name of myAccount/// "<<endl;
   cout<<"Initial name of myAccount1: "<<myAcocount1.getName()<<endl;
   cout<<"Initial name of myAccount1: "<<myAcocount2.getName()<<endl;


   //cout<<"Please enter the name of account : ";
   //string newName;
   //getline(cin,newName);
   //myAcocount.setName(newName);
   //cout<<"New Name of Account is : " <<myAcocount.getName()<<endl;
}