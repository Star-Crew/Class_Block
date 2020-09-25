#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
	Blockchain();

	void AddBlock(Block bNew);

private:
	
	vector<Block> _vChain;

	Block _GetLastBlock() const;
};
