#include <cstdint>
#include <iostream>

using namespace std;

class Block{

    private:
        uint32_t indexIn;
        int64_t Nonce;
        string sData;
        string sHash;
        time_t Time;
        string calculateHash() const;
    
    public:
        Block(uint32_t, const string &sDataIn);
        string sPrevHash;
        string getHash();
        int MineBlock(uint32_t);
};
