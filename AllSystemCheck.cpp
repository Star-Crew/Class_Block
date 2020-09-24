#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string clutch, gearbox, brake; //���������, ������� �������, ��������� �������.
	string pressure, fuel_level, engine, steering;//�������� � �����, ������� �������, ���������, ������� ����������.
	string pointer1, pointer2, lump1, lump2, lump3, speedometer, computer;
	
	ifstream tr("Transmission.txt");
	if (tr.is_open())
	{
		getline(tr, clutch);
		getline(tr, gearbox);
		getline(tr, brake);
	}
	tr.close();
	ifstream ct("Control.txt");
	if (ct.is_open())
	{
		getline(ct, pressure);
		getline(ct, fuel_level);
		getline(ct, engine);
		getline(ct, steering);
	}
	ct.close(); 
	ifstream ap("Appliances.txt");
	if (ap.is_open())
	{
		getline(ap, pointer1);
		getline(ap, pointer2);
		getline(ap, lump1);
		getline(ap, lump2);
		getline(ap, lump3);
		getline(ap, speedometer);
		getline(ap, computer);
	}
	ap.close();
	int k = 0;
		/*
		��������� ���� ��� :
		��������� ������ ������� � ����
		��������� ����������� ����������� ��������
		����������� ����� ��������� ��������� ������������
		����������� ����� ���������� ��������� ������� ��������� �������
		����������� ����� ������������� ������ ���������� ����������
		���������
		���������� ��������
		*/
		if (clutch == "problem" || gearbox == "problem" || brake == "problem")
		{
			cout << "��������! �������� �������� � ������������ ����������." << endl 
				<< "��������� - " << clutch << endl 
				<< "������� �������  - " << gearbox << endl 
				<< "��������� ������� - " << brake << endl;
			cout << "������������ ����������� ���������. ��������� ���������� �� �������������� ����� ���������." << endl;
			cout << "���� ���������� - 1. �� ��������� - 2." << endl;
			k = 1;
			int block;
			cin >> block;
			if (block == 1)
				cout << "������ ���������. ��������." << endl;
		}
		if (pressure == "problem" || fuel_level == "problem" || engine == "problem" || steering == "problem")
		{
			k = 1;
			cout << "��������������!" << endl;
			if (pressure == "problem")
			{
				cout << "��������, ���-�� �� ��� � ��������� � �����." << endl;
				k = 1;
			}
			if (fuel_level == "problem")
			{
				cout << "������ ������� �������." << endl;
				k = 1;
			}
			if (engine == "problem")
			{
				cout << "��������, ���-�� �� ��� � ����������." << endl;
				k = 1;
			}
			if (steering == "problem")
			{
				cout << "��������, ���-�� �� ��� � ������� ��������" << endl;
				k = 1;
			}
		}

		if (pointer1 == "problem" || pointer2 == "problem" || lump1 == "problem" || lump2 == "problem" || lump3 == "problem" || speedometer == "problem" || computer == "problem")
			{
				k = 1;
				cout << "�������� �������� � ������������ ��������� ������ ����������. ��������� ������." << endl;
			}
		
		if (k == 0)
			cout << "���������� ��������� ����� � ������. ����������� ����!" << endl;
return 0;
}