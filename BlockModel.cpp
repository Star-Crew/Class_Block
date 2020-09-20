#include <iostream>
#include <string>
using namespace std;

class Hash
{
	//variables
private:
	int data;
	int index;
	int timestamp;

	//functions
public:
	void SetHash(int d, int i, int t)
	{
		data = d;
		index = i;
		timestamp = t;
	}
	void Show()
	{
		cout << data << index << timestamp << endl;
	}
};

class CarProfile
{
	//variables
private:
	Hash hash;
	int data;
	int index;
	int timestamp;

	int vin;
	string brand;
	string model;
	string colour;
	string reg_num;
	
protected:

	float speed = 82.3;
	float timefs = 465.5;
	float fuel = 79;

	//functions
public:
	CarProfile(int d, int i, int t, string b, string m, string c, string r)
	{
		data = d;
		index = i;
		timestamp = t;
		brand = b;
		model = m;
		colour = c;
		reg_num = r;
		hash.SetHash(data, index, timestamp);
	}

	void Show()
	{
		cout << data << index << timestamp << brand << colour << reg_num << endl;
		hash.Show();
	}

	void Stats()
	{
		cout << "Speed: " << speed << " km/h" << endl
			<< "Time from start: " << timefs << " min" << endl
			<< "Fuel level: " << fuel << "%" <<  endl;
	}
	float SpdRet()
	{
		return speed;
	}
	float FlRet()
	{
		return fuel;
	}
	float TimeRet()
	{
		return timefs;
	}
};

int main()
{
	int data = 1;
	int index = 1;
	int timestamp = 1;


	int vin = 1;
	string brand = "Brand";
	string model = "Model";
	string colour = "Colour";
	string reg_num = "Reg num";


	CarProfile block1(data, index, timestamp, brand, model, colour, reg_num);
	block1.Show();
	block1.Stats();
	return 0;
}
