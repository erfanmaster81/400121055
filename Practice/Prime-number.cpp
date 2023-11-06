#include<iostream>
#include "math.h"
using namespace std;
int main()
{
Math math;
 int number;
 cout<<"Enter a Number To Print Prime Number forom 1 to Number:";
 cin>>number;
 for(int i=0;i<number;i++)
    if(math.isPrime(i))
        cout<<i<<"\t";
}
