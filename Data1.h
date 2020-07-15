#pragma once
#include "Record.h"
#include "Item.h"
#include <list>
#include <string>
using namespace std;

// �����-������. �������� ��� ������ � ����������� ��� ��� ������.
// ��������� ��� �������� ���������� � �������� �������������.
ref class Data1
{
public:
	// ������ � �������� � ������� �������
	static list<Record*> *allRecords = new list<Record*>();
	// ������: ��������, �������, ������������� �� ���������
	static void addElement(Record* record);
	static void deleteElement(int index); 
	static void sortByDate();
	static void sortByReceiveTime();
	static void sortByReturnTime();
	static void sortByCustomerName();
	static void sortByType();
	static void sortByCost();

	// ������ ������� �� ������
	static list<Item*> *allItems = new list<Item*>();
};

