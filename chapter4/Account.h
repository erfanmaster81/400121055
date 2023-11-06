#include<iostream>

// class Account
// {
//     public:
//         Account(std::string cName,int cAge,int cBalance=50)
//         {
//             name=cName;
//             age=cAge;
//             balance=cBalance;
//         }
//         std::string getName()
//         {
//             return name;
//         }
//         int getBalance()
//         {
//             return balance;
//         }


//     private:
//         std::string name;
//         int age;
//         int balance;

// };
class Account
{
    public:
        Account(std::string cName,int cAge,int cBalance=50):name(cName),age(cAge),balance(cBalance)
        {}
        std::string getName()
        {
            return name;
        }
        int getBalance()
        {
            return balance;
        }


    private:
        std::string name;
        int age;
        int balance;

};