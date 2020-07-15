#pragma once
#include <string>
using namespace std;

// ����� ��� �������� ������� � ��������� �������
class Record
{
private:
	// ����: ����, ���� ��������� � ��������, ������ ��������� � ��������, ������ ������, ������� ����������
	string date;
	int receiveHours;
	int receiveMinutes;
	int returnHours;
	int returnMinutes;
	int itemIndex;
	string customerName;
public:
	// �����������
	Record(string date1, int receiveHours1, int receiveMinutes1, 
		int returnHours1, int returnMinutes1, string name, int item);

	// get
	string getDate();
	string getReceiveTime();
	string getReturnTime();
	string getCustomerName();
	int getItemIndex();

	// �����, ������������ �������� ��������� ������ �������
	int getCost();

	// �������������� � ������ ��� ������ � ����
	string toString();
};

