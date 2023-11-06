#include<iostream>
using namespace std;
int main ()
{
int grade;
cout<<"Please Enter a Grade:";
cin>>grade;
cout<<endl;
if(grade>=90){
    cout<<"A";
}else if(grade>=80){
    cout<<"B";
}else if(grade>=70){
    cout<<"C";
}else if (grade>=60){
    cout<<"D";
}else{
    cout<<"F";
}


cout<<endl<<"----------------------------------------------------------------------------------------------------"<<endl;

// int grade;
// cout<<"Please Enter a Grade:";
// cin>>grade;
// cout<<endl;
// if(grade>=90){
//     cout<<"A";
// }else{
//     if(grade>=80){
//         cout<<"B";
//     }else{
//         if(grade>=70){
//             cout<<"C";
//         }else{
//             if(grade>=60){
//                 cout<<"D";
//             }else{
//                 cout<<"F";
//             }
//         }
//     }
// }

}