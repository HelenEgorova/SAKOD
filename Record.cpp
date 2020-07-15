#include "Record.h"
#include "Data1.h"

// Реализация всех методов из Record.h

Record::Record(string date1, int receiveHours1, int receiveMinutes1, 
	int returnHours1, int returnMinutes1, string name, int item)
{
	date = date1;
	receiveHours = receiveHours1;
	receiveMinutes = receiveMinutes1;
	returnHours = returnHours1;
	returnMinutes = returnMinutes1;
	customerName = name;
	itemIndex = item;
}

string Record::getDate() {
	return date;
}

string Record::getReceiveTime() {
	string hour = std::to_string(receiveHours);
	string min = std::to_string(receiveMinutes);
	if (receiveHours < 10) hour = "0" + hour;
	if (receiveMinutes < 10) min = "0" + min;
	return  hour + ":" + min;
}

string Record::getReturnTime() {
	if (returnHours == -1) return "";
	string hour = std::to_string(returnHours);
	string min = std::to_string(returnMinutes);
	if (returnHours < 10) hour = "0" + hour;
	if (returnMinutes < 10) min = "0" + min;
	return  hour + ":" + min;
}

int Record::getItemIndex() { return itemIndex; }

string Record::getCustomerName() {
	return customerName;
}

string Record::toString() {
	return date + " " + std::to_string(receiveHours) + " " + std::to_string(receiveMinutes) + " " +
		std::to_string(returnHours) + " " + std::to_string(returnMinutes) + " " + customerName + " " + std::to_string(itemIndex);
}

int Record::getCost()
{
	if (returnHours == -1) return 0;

	// Поиск предмета проката по индексу
	list<Item*>::iterator it = Data1::allItems->begin();
	for (int i = 0; i < itemIndex; i++) {
		++it;
	}
	Item* cur = *it;

	double result;

	if (returnHours == receiveHours) result = (cur->cost) * (returnMinutes - receiveMinutes) / 60;
	// Минуты возврата могут быть меньше минут выдачи, поэтому прибавляем 60 к минутам, а из часов вычитаем 1
	else result = (cur->cost) * (returnMinutes + 60 - receiveMinutes) / 60 + (cur->cost) * (returnHours - receiveHours - 1);
	return result;
}
