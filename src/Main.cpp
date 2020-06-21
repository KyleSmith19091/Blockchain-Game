#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "../include/Blockchain.hpp"
#include "../include/Startup.hpp"
#include <thread>
#include <chrono>

using namespace std;

bool findWinner(Block hacker, Block cyber, int diff){
    bool result = true;
    int nonceHacker = hacker.MineBlock(diff);
    int nonceCyber = hacker.MineBlock(diff);
    if(nonceHacker < nonceCyber){
        cout << "System Hacked" << endl;
        cout << "Transaction Comprimised!" << endl;
        result = false;
    }else{
        cout << "System hack stopped!" << endl;
        cout << "Cyber force defence successful!" << endl;
    }
    return result;
}

void showHackerScreen(){
    cout << "> Will you initiate the hack?" << endl;
    cout << "> Waiting for User Confirmation!";
    cin.get();
    cout << "\n";
    cout << "~ INITIATING HACK!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Cracking Encryption!" << endl;  
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Done!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Bypassing Spiders" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ DONE!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Possible Transaction Found!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Polycode algorithm initiated!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Mining Transaction!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    int money = rand() % 10000 + 100;
    int diff = rand() % 2 + 1; // Max difficulty of 10
    Block hacker(1, to_string(money));
    Block cyber(2, to_string(money));
    bool winner = findWinner(hacker, cyber, diff);
    if(!winner) { cout << "VarCoin Transaction intercepted\n" << "§ " << money << " taken!" << endl;}
}

void showPlayerScreen(){
    cout << "! INTRUSION DETECTED !" << endl;
    cout << "> Will You Intercept?" << endl;
    cout << "> Waiting for User Confirmation!";
    cin.get();
    cout << "\n";
    cout << "~ STARTING COUNTER-MEASURES!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Searching for Open Port" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Found port" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Burning Firewall!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Firewall Down!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Found intercepted transaction!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "~ Countering Polycode Algorithm!" << endl;
    int money = rand() % 10000 + 100;
    int diff = rand() % 2 + 1;
    Block cyber(1, to_string(money));
    Block hacker(2, to_string(money));
    bool winner = findWinner(hacker, cyber, diff);
    if(winner) { cout << "Transaction of §" << money << " went through\nWell done cyber force 1" << endl;}

}

int main(){

    Blockchain bc = Blockchain();
    system("clear");
    User u = startup::DisplayWelcome();
    system("clear");
    if(u.getIsHacker()){
        showHackerScreen();        
    }else{
        showPlayerScreen();        
    }

    return 0;
}
