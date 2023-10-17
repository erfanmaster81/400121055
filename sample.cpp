#include<iostream>
#include <limits>
using namespace std;
int main()
{
int age;
cout<<"Please Enter Your Age : ";
while(!(cin>>age))
    {
        cout<<"Please Enter a Number :";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
cout<<"Your Age Is : "<<age;
return 0;
}