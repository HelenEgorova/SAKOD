#pragma once
#include <string>

using namespace std;

// ����� ��� �������� ���������� � ��������� �������
class Item
{
public:
	// ����: ��������, ���������
	string name;
	int cost;
	// �����������
	Item(string name1, int cost1) {
		name = name1;
		cost = cost1;
	}
};
