#include "../include/Blockchain.hpp"

Blockchain::Blockchain(){
    chain.emplace_back(Block(0,"Genesis Block"));
    nDifficulty = 4;
}

void Blockchain::AddBlock(Block bNew){
    bNew.sPrevHash = getLastBlock().getHash();
    bNew.MineBlock(nDifficulty);
    chain.push_back(bNew);
}

Block Blockchain::getLastBlock() const{
    return chain.back();
}


