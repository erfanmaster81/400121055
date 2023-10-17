#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"Please Enter Your Age : ";
if(cin>>age)
    {
        cout<<"\n Your Age Is :" << " " << age;
    }
else 
    {
        cout<<"You Enter Wrong Number!!";
    }
return 0;
}