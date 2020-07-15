#pragma once
#include <string>

using namespace std;

// Класс для хранения информации о предметах проката
class Item
{
public:
	// Поля: название, стоимость
	string name;
	int cost;
	// Конструктор
	Item(string name1, int cost1) {
		name = name1;
		cost = cost1;
	}
};
