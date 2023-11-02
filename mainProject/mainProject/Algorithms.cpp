#pragma once
#include "Algorithms.h"
#include "Include.h"

using namespace System;
//������� ��� ���������� ���
int AgeCalculator(User& obj, tm Date)
{
	DateTime now = DateTime::Now;
	int age = now.Year - (Date.tm_year + 1900);
	return age;
}
//�������
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
//������� ��������� ������
int Hash::receivingCodes(int x)
{
	//�������� �������� � ������� ������� ASCII
	x += 256;
	//������������ X, �� ���� ������� ���� �� �� ���� ����������� � ������� (48-57)0-9, (65-90)A-Z, (97-122)a-z.
	while (!(((x <= 57) && (x >= 48)) || ((x <= 90) && (x >= 65)) || ((x <= 122) && (x >= 97))))
	{
		//������������
		if (x < 48)
			x += 24;
		else
			x -= 48;
	}
	return x;
}
int Hash::getControlSum(std::string str)
{
	//sault = ���� ���� ������� � �����
	//iter_str = �������� �� �����.
	int sault = 0;
	for (int iter_str = 0; iter_str < str.size(); iter_str++)
	{
		//����� ��� ������� �������� � sault
		sault += int(str[iter_str]);
	}
	//��������� ���������� ����, ��� ������� �����.
	return sault;
}
std::string Hash::getHash(std::string userpass, int lengthHash)
{
	//�������� ������� ����� ����, ������ 2
	int minLenStrHash = 6;
	//��������� ������� �����
	int realMinLenStrHash = 0;

	//�������� ��� �����(���������� ����)
	int orginalStrSault = getControlSum(userpass);
	//����� �����
	int originalLenghtStr = (userpass.size());
	//��������� ������� �����, ������� ������ 2, ������� �� ������ ������� ����
	while (minLenStrHash <= lengthHash)
		//�������� �����
		realMinLenStrHash = (minLenStrHash *= 2);
	//��������� ����������� �� ������� ��������� ������� ����� ���� - 2^n
	//��������� ���� ������� ����� ���� 50 �������(�� �� ������������� ��� ������ ����)
	while (minLenStrHash < originalLenghtStr)
		minLenStrHash *= 2;
	//�������� ��� ����� ���� ��� �� �����, � 2 ���� ����� ������������ �����
	//maxLenStrHash = ����������� ������� ����
	if ((minLenStrHash - originalLenghtStr) < minLenStrHash)
		minLenStrHash *= 2;
	//������� �������, �� ������� ������ �� �����
	int addCount = minLenStrHash - originalLenghtStr;
	//������
	for (int i = 0; i < addCount; i++)
		//������ 0 ������ ����� � ������ �� 1 ������� �����, � ������� � �����
		userpass += receivingCodes(userpass[i] + userpass[i + 1]);
	//�������� ���������� ���
	int maxSault = getControlSum(userpass);
	int maxLengthstr = (userpass.size());
	//������� �� ��� ������� ��� ��� �������
	while (userpass.size() != realMinLenStrHash)
	{
		for (int i = 0, center = userpass.size() / 2; i < center; i++)
			//�������� ���� �������, � ����, � �� �������.
			hash += receivingCodes(userpass[center - i] + userpass[center + i]);
		userpass = hash;
		hash.clear();
	}
	//������ ��� ������� �� ������ ������� ��� ��������� �������
	int del_symbol = realMinLenStrHash - lengthHash;
	//�������
	for (int i = 0, countCompress = realMinLenStrHash / del_symbol; hash.size() < (lengthHash - 4); i++)
	{
		if (i % countCompress == 0)
			hash += receivingCodes(userpass[i] + userpass[++i]);
		else
			hash += userpass[i];
	}
	//������ ���������� ���
	hash += receivingCodes(orginalStrSault);
	hash += receivingCodes(originalLenghtStr);
	//������ ����������� ���
	hash += receivingCodes(maxSault);
	hash += receivingCodes(maxLengthstr);

	return hash;
}