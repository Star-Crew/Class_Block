#include "Chain.h"

int main()
{
	Blockchain bChain = Blockchain();

	bChain.AddBlock(Block(1, "Block 1 Data"));
	
	
	bChain.AddBlock(Block(2, "Block 2 Data"));
	

	bChain.AddBlock(Block(3, "Block 3 Data"));
	return 0;
}