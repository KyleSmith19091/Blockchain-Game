#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "./User.hpp"
namespace startup{

    User DisplayWelcome();
    User generatePlayer();
    User generateHacker();
    User determinePlayer();
    vector<string> LoadDialogFile(string);
    void DisplayAccount();
    void DisplayHackerInfo();

    
};
