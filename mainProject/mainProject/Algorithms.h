#pragma once
#include "Data.h"
//������� ��� ���������� ���
int AgeCalculator(User& obj, tm Date);

class Hash
{
	//������
	std::string hash;
	//��������� ����� �� ������� ASCII
	int receivingCodes(int x);
	//���������� ����
	int getControlSum(std::string std);
public:
	//���������
	std::string getHash(std::string userString, int lengthHash);
};
