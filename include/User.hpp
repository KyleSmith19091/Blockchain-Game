#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class User{

    private:
        int money;
        bool isHacker;
        int generateMoney();

    public:    
        User(bool);
        double getMoney() { return money; };
        double getIsHacker() { return isHacker; };

    
};
