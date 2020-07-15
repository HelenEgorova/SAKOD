#pragma once
#include <string>
using namespace std;

// Класс для хранения записей о предметах проката
class Record
{
private:
	// Поля: дата, часы получения и возврата, минуты получения и возврата, индекс товара, фамилия покупателя
	string date;
	int receiveHours;
	int receiveMinutes;
	int returnHours;
	int returnMinutes;
	int itemIndex;
	string customerName;
public:
	// Конструктор
	Record(string date1, int receiveHours1, int receiveMinutes1, 
		int returnHours1, int returnMinutes1, string name, int item);

	// get
	string getDate();
	string getReceiveTime();
	string getReturnTime();
	string getCustomerName();
	int getItemIndex();

	// Метод, возвращаюший итоговую стоимость товара проката
	int getCost();

	// Преобразования в строку для записи в файл
	string toString();
};

