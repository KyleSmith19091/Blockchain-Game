#include <cstdint>
#include <vector>

#include "Block.hpp"

using namespace std;

class Blockchain{

    private:
        uint32_t nDifficulty;
        vector<Block> chain;
        Block getLastBlock() const;

    public:
        Blockchain();
        void AddBlock(Block bNew);


};
