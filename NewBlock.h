#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

class Block {
public:
	string sHash;
	string sPrevHash;

	Block(uint32_t nIndexIn, const string &sDataIn);
	void ShowInfo();
	
	
	

private:
	uint32_t _nIndex;
	
	string _sData;
	time_t _tTime;
	string _sVin, _sBrand, _sModel, _sColour, _sRegNum;
	
};


