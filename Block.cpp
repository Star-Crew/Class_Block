#include "Block.h"
#include <string>
#include <time.h>
Block::Block(uint32_t nIndexIn, const string &sDataIn) : _nIndex(nIndexIn), _sData(sDataIn)
{
	_nNonce = 0;
	_tTime = time(nullptr);
	_sData = sDataIn;
	sHash = _sData + to_string( _nIndex);
}



