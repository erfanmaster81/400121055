#include<cstdlib>
#include<iostream>

using namespace std;

void  useLocal();
void  useStaticLocal();
void useGlobalLocal();
int x{1};
int main(){
    int x{10};
    cout << "local variable x : "<< x << endl;
    {
        int x{15};
        cout << "new local inside block varible x : "<< x<<endl;
    };
    cout << "global variable x : "<<::x << endl;
    useLocal();
    useStaticLocal();
    useGlobalLocal();
    useLocal();
    useStaticLocal();
    useGlobalLocal();
};
void useLocal(){
    int x{20};
    cout << "x inside useLocal is : " << x << endl;
    ++x;
    cout << "x inside useLocal after increment is : " << x << endl;
};
void useStaticLocal(){
    static int x{50};
    cout << "x inside usestaticLocal is : " << x << endl;
    ++x;
    cout << "x inside usestaticLocal after increment is : " << x << endl;
};
void useGlobalLocal(){
    cout << "x inside useGlobalLocal is : " << x << endl;
    ++x;
    cout << "x inside useGlobalLocal after increment is : " << x << endl;
};