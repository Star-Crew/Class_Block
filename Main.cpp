#include "Chain.h"

int main()
{
	Blockchain bChain = Blockchain();

	bChain.AddBlock(Block(1, "Block 1 Data"));
	cout << "*****Added 1st block*****" << endl;
	
	bChain.AddBlock(Block(2, "Block 2 Data"));
	cout << "*****Added 2nd block*****" << endl;

	bChain.AddBlock(Block(3, "Block 3 Data"));
	cout << "*****Added 3rd block*****" << endl;
	return 0;
}