#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string clutch, gearbox, brake; //сцепление, коробка передач, тормозная система.
	string pressure, fuel_level, engine, steering;//давление в шинах, уровень топлива, двигатель, рулевое управление.
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
		Последний ввод это :
		Указатель уровня топлива в баке
		Указатель температуры охлаждающей жидкости
		Контрольная лампа включения аварийной сигнализации
		Контрольная лампа аварийного состояния рабочей тормозной системы
		Контрольная лампа неисправности систем управления двигателем
		Спидометр
		Маршрутный комьютер
		*/
		if (clutch == "problem" || gearbox == "problem" || brake == "problem")
		{
			cout << "Внимание! Возникла проблема с трансмиссией автомобиля." << endl 
				<< "Сцепление - " << clutch << endl 
				<< "Коробка передач  - " << gearbox << endl 
				<< "Тормозная система - " << brake << endl;
			cout << "Эксплуатация автомобился запрещена. Запрошено разрешение на автоматический вызов эвакуации." << endl;
			cout << "Дать разрешение - 1. Не разрешать - 2." << endl;
			k = 1;
			int block;
			cin >> block;
			if (block == 1)
				cout << "Запрос отправлен. Ожидайте." << endl;
		}
		if (pressure == "problem" || fuel_level == "problem" || engine == "problem" || steering == "problem")
		{
			k = 1;
			cout << "Предупреждение!" << endl;
			if (pressure == "problem")
			{
				cout << "Возможно, что-то не так с Давлением в шинах." << endl;
				k = 1;
			}
			if (fuel_level == "problem")
			{
				cout << "Низкий уровень топлива." << endl;
				k = 1;
			}
			if (engine == "problem")
			{
				cout << "Возможно, что-то не так с Двигателем." << endl;
				k = 1;
			}
			if (steering == "problem")
			{
				cout << "Возможно, что-то не так с Рулевой системой" << endl;
				k = 1;
			}
		}

		if (pointer1 == "problem" || pointer2 == "problem" || lump1 == "problem" || lump2 == "problem" || lump3 == "problem" || speedometer == "problem" || computer == "problem")
			{
				k = 1;
				cout << "Возникла проблема с контрольными приборами вашего автомобиля. Необходим ремонт." << endl;
			}
		
		if (k == 0)
			cout << "Автомобиль полностью готов к работе. Счастливого пути!" << endl;
return 0;
}