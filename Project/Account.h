#include<iostream>
class Account {
    public:
        explicit Account(std::string accountName)
        {
            name=accountName;
        }
        std::string getName() const {
            return name;
        }
        void setName(std::string theName) {
            name=theName;
        }
    private:
        std::string name;
 };