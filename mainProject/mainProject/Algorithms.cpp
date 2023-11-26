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
std::string ParseToStringorSTDSTRING(System::Object^ data)
{
	if (System::String^ str = dynamic_cast<System::String^>(data))
	{
		return msclr::interop::marshal_as<std::string>(data->ToString());
	}
}
std::tm ParseToTm(System::DateTime^ data)
{
	std::tm Date = {};
	Date.tm_year = data->Year - 1900;
	Date.tm_mon = data->Month - 1;
	Date.tm_mday = data->Day;
	Date.tm_hour = data->Hour;
	Date.tm_min = data->Minute;
	Date.tm_sec = data->Second;
	return Date;
}
System::String^ ParseToStringorSTDSTRING(std::string data)
{
	System::String^ parse_data = msclr::interop::marshal_as<System::String^>(data);
	return parse_data;
}
//����������� (��, �����, ����)
System::DateTime^ ConvertToDateTime(std::tm dateInfo)
{
	int year = dateInfo.tm_year + 1900;
	int month = dateInfo.tm_mon + 1;
	int day = dateInfo.tm_mday;

	return gcnew System::DateTime(year, month, day);
}
System::DateTime ConvertTmToDateTime(std::tm tmStruct)
{
	int year = tmStruct.tm_year;  // tm_year is years since 1900
	int month = tmStruct.tm_mon;     // tm_mon is 0-based (0 = January)
	int day = tmStruct.tm_mday;

	return System::DateTime(year, month, day);
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
//���������� �� ���������
void SortHospitalsByRating(std::vector<Hospital>& hospitals, array<System::String^>^ dataList)
{
	int n = hospitals.size();
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (hospitals[j].hospitalRating < hospitals[j + 1].hospitalRating) {
				// ����� �������� �������
				std::swap(hospitals[j], hospitals[j + 1]);

				// ����� �������� � dataList
				System::String^ temp = dataList[j];
				dataList[j] = dataList[j + 1];
				dataList[j + 1] = temp;
			}
		}
	}
}
//�������������� ������
std::string standardizePhoneNumberUA(const std::string& rawNumber) {
	std::string cleanNumber;

	// ��������� ���������� �������
	for (char c : rawNumber)
	{
		if (isdigit(c)) {
			cleanNumber += c;
		}
	}

	// ��������� ���� �����, ���� �������
	if (cleanNumber.length() == 10 && cleanNumber[0] == '0')
	{
		cleanNumber = "380" + cleanNumber.substr(1);
	}
	else if (cleanNumber.length() == 12 && cleanNumber.rfind("380", 0) != 0)
	{
		// �������, ������������ ������
		return "Invalid Number";
	}

	// �������� ������� ������
	if (cleanNumber.length() != 12)
	{
		return "Invalid Number";
	}

	// ������������ ������
	std::string formattedNumber = "+" + cleanNumber.substr(0, 3) + " " + cleanNumber.substr(3, 2) + " " + cleanNumber.substr(5, 3) + " " + cleanNumber.substr(8, 2) + " " + cleanNumber.substr(10);

	return formattedNumber;
}
//���������� �����
void sortVisits(System::Collections::Generic::List<System::String^>^ visits)
{
	for (int i = 0; i < visits->Count - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < visits->Count; j++)
		{
			// ��������� �� ������ � ������
			if (System::String::Compare(visits[j]->Substring(0, 19), visits[minIndex]->Substring(0, 19)) < 0)
			{
				minIndex = j;
			}
		}
		// ���� ��������
		if (minIndex != i)
		{
			System::String^ temp = visits[minIndex];
			visits[minIndex] = visits[i];
			visits[i] = temp;
		}
	}
}

