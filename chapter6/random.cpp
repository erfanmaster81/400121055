#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main(){
    srand(time(0));
    cout << (1+rand()%15);
}