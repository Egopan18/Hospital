#pragma once
#include "Data.h"
//Функція для розрахунку віку
int AgeCalculator(User& obj, tm Date);
//ПарсингObejct^ в строку
std::string ParseToString(System::Object^ data);
//ПарсингDateTime^ в tm
std::tm ParseToTm(System::DateTime^ data);

//Хеш
class Hash
{
	//пароль
	std::string hash;
	//коректуємо число до таблиці ASCII
	int receivingCodes(int x);
	//контрольна сума
	int getControlSum(std::string std);
public:
	//хешування
	std::string getHash(std::string userString, int lengthHash);
};
