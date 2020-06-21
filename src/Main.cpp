#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "../include/Blockchain.hpp"
#include "../include/Startup.hpp"
#include <thread>
#include <chrono>

using namespace std;

int main(){

    Blockchain bc = Blockchain();
    User u = startup::DisplayWelcome();
    cout << u.getIsHacker() << endl;
    int chainSize = rand() % 20 + 10;
    cout << chainSize << endl;
    system("clear");
    cout << "INCOMING TRANSATION!" << endl;
    cout << "Will you initiate the hack?" << endl;
    cout << "Waiting for User Confirmation!" << endl;
    cin.get();
    cout << "INITIATING HACK!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Cracking Encryption!" << endl;  
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Done!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Bypassing Spiders" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "DONE!" << endl;
    int money = rand() % 10000 + 100;
    int diff = rand() % 2 + 1; // Max difficulty of 10
    Block hacker(1, to_string(money));
    Block cyber(2,to_string(money));
    cout << "Block Difficulty: " << diff << endl;
    this_thread::sleep_for(chrono::seconds(1));
    int attempts = hacker.MineBlock(diff);
    int cyberAttempt = cyber.MineBlock(diff); 
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Hacker: " << attempts << endl;
    cout << "Cyber: " << cyberAttempt << endl;
    if(attempts < cyberAttempt){
        cout << "Kaching! \n" << "VarCoins Gained: " << money << endl;
    }else{
        cout << "SYSTEM ERROR, Cyber Force have Breached Firewall!\nShutting Down!" << endl;
    }
    

    return 0;
}
