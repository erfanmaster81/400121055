#include<iostream>
#include<iomanip>
#include<array>

using namespace std;

int main(){
    array<int, 4> n;
    int m[2];
    for(int i=0;i<5;i++)
    {
        n[i] = 0;
        m[i] = 1;
    }    
    cout << "Element" << setw(10) << "Valuen"<<setw(10) << "Valuem"<<endl;
    for(int j=0;j<5;j++)
    {
        cout << j << setw(10) << n[j]<<setw(10)<<m[j]<<endl;
    }
}