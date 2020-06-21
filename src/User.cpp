#include "../include/User.hpp"

int User::generateMoney(){
    srand(time(0));    
    return ((rand() % 1000000) + 1000); 
}

User::User(bool isHacker){
    this->isHacker = isHacker;
    this->money = generateMoney();
}


