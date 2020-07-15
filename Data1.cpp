#include "Data1.h"
#include <algorithm>

// Реализация методов класса

void Data1::addElement(Record* record)
{
	allRecords->push_back(record);
}

void Data1::deleteElement(int index)
{
	for (int i = index; i < allRecords->size() - 1; i++)
	{
		allRecords[i] = allRecords[i + 1];
	}
	allRecords->pop_back();
}

struct ComparatorDate
{
	bool operator ()(Record* record1, Record* record2)
	{
		if (record1->getDate() == record2->getDate())
			return record1 < record2;
		return record1->getDate() < record2->getDate();

	}
};

void Data1::sortByDate() {
	Data1::allRecords->sort(ComparatorDate());
}

struct ComparatorReceiveTime
{
	bool operator ()(Record* record1, Record* record2)
	{
		if (record1->getReceiveTime() == record2->getReceiveTime())
			return record1 < record2;
		return record1->getReceiveTime() < record2->getReceiveTime();
	}
};

void Data1::sortByReceiveTime() {
	Data1::allRecords->sort(ComparatorReceiveTime());
}

struct ComparatorReturnTime
{
	bool operator ()(Record* record1, Record* record2)
	{
		if (record1->getReturnTime() == record2->getReturnTime())
			return record1 < record2;
		return record1->getReturnTime() < record2->getReturnTime();
	}
};

void Data1::sortByReturnTime() {
	Data1::allRecords->sort(ComparatorReturnTime());
}

struct ComparatorCustomerName
{
	bool operator ()(Record* record1, Record* record2)
	{
		if (record1->getCustomerName() == record2->getCustomerName())
			return record1 < record2;
		return record1->getCustomerName() < record2->getCustomerName();
	}
};

void Data1::sortByCustomerName() {
	Data1::allRecords->sort(ComparatorCustomerName());
}

struct ComparatorType
{
	bool operator ()(Record* record1, Record* record2)
	{
		if (record1->getItemIndex() == record2->getItemIndex())
			return record1 < record2;
		return record1->getItemIndex() < record2->getItemIndex();
	}
};

void Data1::sortByType() {
	Data1::allRecords->sort(ComparatorType());
}

struct ComparatorCost
{
	bool operator ()(Record* record1, Record* record2)
	{
		if (record1->getCost() == record2->getCost())
			return record1 < record2;
		return record1->getCost() < record2->getCost();
	}
};

void Data1::sortByCost() {
	Data1::allRecords->sort(ComparatorCost());
}
