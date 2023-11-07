#include<iostream>
class Math
{
    public:
        bool isPrime(int number) {
             if (number <= 1) {
             return false;
             }
             int cnt=2;
            while(cnt<number)
            {
                if(number % cnt == 0)
                    {
                        return false;
                    }
                    cnt++;
            }

         return true;
        }
};
