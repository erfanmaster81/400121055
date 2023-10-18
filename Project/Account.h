#include<iostream>
class Account {
    public:
        std::string getName() const {
            return name;
        }
        void setName(std::string theName) {
            name=theName;
        }
    private:
        std::string name;
 };