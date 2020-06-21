#include "../include/Startup.hpp"

using namespace startup;
using namespace std;

User startup::DisplayWelcome(){
    cout << "Welcome User!" << endl;
    return determinePlayer();
}

vector<string> startup::LoadDialogFile(string fileName){
    
    ifstream dialog_file(fileName+".txt");
    vector<string> dialog;
    string line;
    while(getline(dialog_file, line)){
        dialog.push_back(line);         
    }
    return dialog;
}

User startup::determinePlayer(){
    srand(time(0));
    int r = rand() % 2; // Generate either 0 or 1
    if(r) return generateHacker();
    return generatePlayer();
}

User startup::generateHacker(){
   User u(true);   
   vector<string> s = startup::LoadDialogFile("./res/HackerWelcome");
   vector<string>::iterator i;
    for (i = s.begin(); i != s.end(); i++) {
        cout << *i << "\n";
    }
    cout << "> ";
    cin.get();
   return u;
}

User startup::generatePlayer(){
    User u(false);
    vector<string> s = LoadDialogFile("./res/PlayerWelcome");
    vector<string>::iterator i;
    for (i = s.begin(); i != s.end(); i++) {
        cout << *i << "\n";
    }
    cout << "> ";
    cin.get();
    return u;
}

void startup::DisplayAccount(){
    vector<string> s = LoadDialogFile("./res/PlayerAccount");
    vector<string>::iterator i;
    for (i = s.begin(); i != s.end(); i++) {
        cout << *i << "\n";
    }
    cout << "> ";
    cin.get();
}

void DisplayHackerInfo(){
    vector<string> s = LoadDialogFile("./res/HackerAccount.txt");
    vector<string>::iterator i;
    for (i = s.begin(); i != s.end(); i++) {
        cout << *i << "\n";
    }
    cout << "> ";
    cin.get();
}
