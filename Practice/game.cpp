#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

unsigned int rollDice();

int main(){
enum class Status{CONTINUE,WON,LOST};
srand(static_cast<unsigned int>(time(0)));
unsigned int myPoint{0};
Status gameStatus;
unsigned int sumOfDic{rollDice()};
switch (sumOfDic)
{
case 7:
case 11:
    gameStatus=Status::WON;
    break;
case 2:
case 3:
case 12:
    gameStatus=Status::LOST;
    break;
default:
    gameStatus=Status::CONTINUE;
    myPoint=sumOfDic;
    cout<<"point is :"<<myPoint<<endl;
    break;
}

while(Status::CONTINUE == gameStatus) {
    sumOfDic=rollDice();
    if(sumOfDic == myPoint){
        gameStatus = Status::WON;
    }
    else {
        if(sumOfDic == 7){
            gameStatus = Status::LOST;
        }
    }
}

if(Status::WON == gameStatus)
    cout<<"Player wins"<<endl;
else
    cout<<"Player loses"<<endl;
}

unsigned int rollDice(){
    int die1{1 + rand() %6};
    int die2{1 + rand() %6};
    int sum{die1+ die2};

    cout<<"Player rolled"<< " "<<die1<< " + "<<die2 << " = " << sum << endl;
    return sum;

}



