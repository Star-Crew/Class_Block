#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Block {
public:
	string sHash;
	string sPrevHash;

	Block(uint32_t nIndexIn, const string &sDataIn);

	

private:
	uint32_t _nIndex;
	uint32_t _nNonce;
	string _sData;
	time_t _tTime;

	
};


