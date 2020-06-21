#include "../include/Block.hpp"
#include "../include/sha256.hpp"
#include <cstdint>
#include <sstream>

Block::Block(uint32_t IndexIn, const string &sDataIn): indexIn(IndexIn),sData(sDataIn){
    Nonce = -1;
    Time = time(nullptr);
}

string Block::getHash(){
    return sHash;
}

int Block::MineBlock(uint32_t nDifficulty){
    char cstr[nDifficulty+1];
    
    for(uint32_t i = 0; i < nDifficulty; i++){
        cstr[i] = '0'; 
    }
    
    cstr[nDifficulty] = '\0';

    string str(cstr);

    do {
        Nonce++;
        sHash = calculateHash();
    }while (sHash.substr(0,nDifficulty)!=str);

    cout << "Block mined: " << sHash << endl;
    return Nonce;
}

inline string Block::calculateHash() const{
   stringstream ss;
   ss << indexIn << Time << sData << Nonce << sPrevHash;
   return sha256(ss.str());
}

