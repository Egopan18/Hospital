#pragma once
#include "Data.h"
//������� ��� ���������� ���
int AgeCalculator(User& obj, tm Date);
//�������Obejct^ � ������
std::string ParseToString(System::Object^ data);
//�������DateTime^ � tm
std::tm ParseToTm(System::DateTime^ data);

//���
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
