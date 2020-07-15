#pragma once
#include "Record.h"
#include "Item.h"
#include <list>
#include <string>
using namespace std;

// Класс-ресурс. Содержит все списки и необходимые для них методы.
// Необходим для хранения информации и удобного использования.
ref class Data1
{
public:
	// Список с записями о товарах проката
	static list<Record*> *allRecords = new list<Record*>();
	// Методы: добавить, удалить, отсортировать по критериям
	static void addElement(Record* record);
	static void deleteElement(int index); 
	static void sortByDate();
	static void sortByReceiveTime();
	static void sortByReturnTime();
	static void sortByCustomerName();
	static void sortByType();
	static void sortByCost();

	// Список товаров на прокат
	static list<Item*> *allItems = new list<Item*>();
};

