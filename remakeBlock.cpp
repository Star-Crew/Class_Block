#include "Block.h"
#include <string>
#include <time.h>
#include "Sha256.h"
Block::Block(uint32_t nIndexIn, const string &sDataIn) : _nIndex(nIndexIn), _sData(sDataIn)
{

	_tTime = time(nullptr);
	_sData = sDataIn;
	
	sHash = _CalculateHash();


	ifstream in("Car" + to_string(nIndexIn) + ".txt");
	if (in.is_open())
	{
		getline(in, _sVin);
		getline(in, _sBrand);
		getline(in, _sModel);
		getline(in, _sColour);
		getline(in, _sRegNum);

	}
	in.close();
	ofstream out("Block" + to_string(nIndexIn) + ".txt");;
	out << _sVin << _sBrand << _sModel << _sColour << _sRegNum << endl << nIndexIn << sHash;
	out.close();

}

inline string Block::_CalculateHash() const
{
	stringstream ss;
	ss << _nIndex << sPrevHash << _tTime << _sData << _nNonce;

	return sha256(ss.str());
}





