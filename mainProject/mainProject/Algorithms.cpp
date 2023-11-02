#pragma once
#include "Algorithms.h"
#include "Include.h"

using namespace System;
//Функція для розрахунку віку
int AgeCalculator(User& obj, tm Date)
{
	DateTime now = DateTime::Now;
	int age = now.Year - (Date.tm_year + 1900);
	return age;
}
//Парсинг
std::string ParseToString(System::Object^ data)
{
	if (System::String^ str = dynamic_cast<System::String^>(data))
	{
		return msclr::interop::marshal_as<std::string>(data->ToString());
	}
	
}
std::tm ParseToTm(System::DateTime^ date)
{
	std::tm Date = {};
	Date.tm_year = date->Year - 1900;
	Date.tm_mon = date->Month - 1;
	Date.tm_mday = date->Day;

	return Date;
}
//Функції хешування паролю
int Hash::receivingCodes(int x)
{
	//здвигаємо значення в діапазон таблиці ASCII
	x += 256;
	//перетворюємо X, до того моменту пока він не буде знаходитися в діапазоні (48-57)0-9, (65-90)A-Z, (97-122)a-z.
	while (!(((x <= 57) && (x >= 48)) || ((x <= 90) && (x >= 65)) || ((x <= 122) && (x >= 97))))
	{
		//перетворюємо
		if (x < 48)
			x += 24;
		else
			x -= 48;
	}
	return x;
}
int Hash::getControlSum(std::string str)
{
	//sault = сума кодів символів в рядку
	//iter_str = ітерація по рядку.
	int sault = 0;
	for (int iter_str = 0; iter_str < str.size(); iter_str++)
	{
		//кожен код символа записуємо в sault
		sault += int(str[iter_str]);
	}
	//повертаємо контрольну суму, всіх символів рядка.
	return sault;
}
std::string Hash::getHash(std::string userpass, int lengthHash)
{
	//мінімальна довжина рядка хеша, кратна 2
	int minLenStrHash = 6;
	//приблизна довжина рядка
	int realMinLenStrHash = 0;

	//отримуємо сіль рядка(контрольну суму)
	int orginalStrSault = getControlSum(userpass);
	//розмір рядка
	int originalLenghtStr = (userpass.size());
	//отримання довжини рядка, кратной степені 2, ближньої до заданої довжини хеша
	while (minLenStrHash <= lengthHash)
		//удвоюємо рядок
		realMinLenStrHash = (minLenStrHash *= 2);
	//отримання приблизного до довжини початкової довжини рядка типу - 2^n
	//наприклад якщо вхідний рядок буде 50 символів(то ми використовуємо цей другий цикл)
	while (minLenStrHash < originalLenghtStr)
		minLenStrHash *= 2;
	//перевірка щоб рядок хеша був як мінімум, в 2 рази довше оригінального рядка
	//maxLenStrHash = максимальна довжина хеша
	if ((minLenStrHash - originalLenghtStr) < minLenStrHash)
		minLenStrHash *= 2;
	//кількість символів, які потрібно додати то рядка
	int addCount = minLenStrHash - originalLenghtStr;
	//додаємо
	for (int i = 0; i < addCount; i++)
		//беремо 0 символ рядка і додаємо до 1 символа рядка, і кладемо в кінець
		userpass += receivingCodes(userpass[i] + userpass[i + 1]);
	//отримуємо максимальні сіль
	int maxSault = getControlSum(userpass);
	int maxLengthstr = (userpass.size());
	//сжимаємо до той довжини яка нам потрібна
	while (userpass.size() != realMinLenStrHash)
	{
		for (int i = 0, center = userpass.size() / 2; i < center; i++)
			//записуємо суму символів, з кінця, і із початку.
			hash += receivingCodes(userpass[center - i] + userpass[center + i]);
		userpass = hash;
		hash.clear();
	}
	//скільки нам потрібно ще убрати символів дял отримання довжини
	int del_symbol = realMinLenStrHash - lengthHash;
	//убираємо
	for (int i = 0, countCompress = realMinLenStrHash / del_symbol; hash.size() < (lengthHash - 4); i++)
	{
		if (i % countCompress == 0)
			hash += receivingCodes(userpass[i] + userpass[++i]);
		else
			hash += userpass[i];
	}
	//додаємо оригінальну сіль
	hash += receivingCodes(orginalStrSault);
	hash += receivingCodes(originalLenghtStr);
	//додаємо максимальну сіль
	hash += receivingCodes(maxSault);
	hash += receivingCodes(maxLengthstr);

	return hash;
}