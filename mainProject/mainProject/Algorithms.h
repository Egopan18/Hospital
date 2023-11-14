#pragma once
#include "Data.h"
//������� ��� ���������� ���
int AgeCalculator(User& obj, tm Date);
//�������
std::string ParseToStringorSTDSTRING(System::Object^ data);
std::tm ParseToTm(System::DateTime^ data);
System::String^ ParseToStringorSTDSTRING(std::string data);
//������� Tm � DateTime
System::DateTime^ ConvertToDateTime(std::tm dateInfo);
System::DateTime ConvertTmToDateTime(std::tm tmStruct);
//���������� �� ���������
void SortHospitalsByRating(std::vector<Hospital>& hospitals, array<System::String^>^ dataList);
//�������������� ������
std::string standardizePhoneNumberUA(const std::string& rawNumber);
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
