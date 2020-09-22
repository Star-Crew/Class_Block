#include "Block.h"
#include <string>
#include <time.h>
Block::Block(uint32_t nIndexIn, const string &sDataIn) : _nIndex(nIndexIn), _sData(sDataIn)
{

	_tTime = time(nullptr);
	_sData = sDataIn;
	sHash = _sData + to_string( _nIndex);

	ifstream in("Car" + to_string(nIndexIn) + ".txt");
	if (in.is_open())
	{
		getline(in, _sVin);
		getline(in, _sBrand);
		getline(in, _sModel);
		getline(in, _sColour);
		getline(in, _sRegNum);
	}

}
void Block::ShowInfo()
{
	cout << "Car info: " << _sVin << " " << _sBrand << " " << _sModel << " " << _sColour << " " << _sRegNum << endl;
}





