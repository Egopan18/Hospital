#pragma once
#include "Algorithms.h"

using namespace System;
//Функція для розрахунку віку
int AgeCalculator(User& obj, tm Date)
{
	DateTime now = DateTime::Now;
	int age = now.Year - (Date.tm_year + 1900);
	return age;
}