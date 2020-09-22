#include "Chain.h"

Blockchain::Blockchain()
{
	_vChain.emplace_back(Block(0, "Genesis Block"));
	
}

void Blockchain::AddBlock(Block bNew)
{
	bNew.sPrevHash = _GetLastBlock().sHash;
	_vChain.push_back(bNew);
	cout << "Hash of block:  " << bNew.sHash << endl;
	bNew.ShowInfo();
}

Block Blockchain::_GetLastBlock() const
{
	return _vChain.back();
}