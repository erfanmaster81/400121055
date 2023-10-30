#include<iostream>
using namespace std;
int main()
{
    float a,test,alpha;
    cout<<"please enter a number : \n";
    cin>>a;
    alpha=a;
    test = alpha*alpha;
    int cnt=0;
    while(abs(test-a) > 1e-5)
    {
        cnt++;
        cout<<" \n approximation of sqrt : " << a << "in iteration" << cnt << " is :"<<test;
        alpha=alpha/2+a/(2*alpha);
        test=alpha*alpha;

    }
    cout<<"the sqrt of " << " " << a << " " << "is" << " "<<alpha;
    test=alpha*alpha;
    cout<<"\n alpha ^ 2 is : "<<test;
    return 0;
}
