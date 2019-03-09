#include <iostream>
#include <conio.h>

using namespace std;


class DATA
{

private:


	int day,

		month,

		year;


public:

	void message()

	{
		cout << "\n\tПрограма один\n\n";

	}

	void setDate(int date_day, int date_month, int date_year)

	{
		day = date_day;

		month = date_month;

		year = date_year;
	}

	void UKRmonth(void)
	{
		if (month == 1)
		{
			cout << "\n\tDate:" << day << " " << "січня" << " " << year << endl << endl;
		}

		if (month == 2)
		{
			cout << "\n\tDate:" << day << " " << "лютого" << " " << year << endl << endl;
		}
		if (month == 3)
		{
			cout << "\n\tDate:" << day << " " << "березня" << " " << year << endl << endl;
		}
		if (month == 4) {
			cout << "\n\tDate:" << day << " " << "квітня" << " " << year << endl << endl;
		}
		if (month == 5)
		{
			cout << "\n\tDate:" << day << " " << "травня" << " " << year << endl << endl;
		}
		if (month == 6)
		{
			cout << "\n\tDate:" << day << " " << "червня" << " " << year << endl << endl;
		}
		if (month == 7)
		{
			cout << "\n\tDate:" << day << " " << "липня" << " " << year << endl << endl;
		}
		if (month == 8)
		{
			cout << "\n\tDate:" << day << " " << "серпня" << " " << year << endl << endl;
		}
		if (month == 9)
		{
			cout << "\n\tDate:" << day << " " << "вересня" << " " << year << endl << endl;
		}
		if (month == 10)
		{
			cout << "\n\tDate:" << day << " " << "жовтня" << " " << year << endl << endl;
		}
		if (month == 11)
		{
			cout << "\n\tDate:" << day << " " << "листопада" << " " << year << endl << endl;
		}
		if (month == 12)
		{
			cout << "\n\tDate:" << day << " " << "грудня" << " " << year << endl << endl;
		}





	}


	void getDate()

	{
		if (day > 31)
		{
			cout << "Ви ввели невірний день!" << endl;

		}
		if (month > 12)
		{
			cout << "Ви ввели невірний місяць!" << endl;

		}
		else
		{

			cout << "\n\tDate:" << day << "." << month << "." << year << endl << endl;

		}




	}




};



int main()

{
start:
	system("chcp 1251");

	int day, month, year;

	cout << "\n\tВведiть поточний день, мiсяць i рiк: \n\n";

	cout << "\tдень  : "; cin >> day;

	cout << "\tмiсяць: "; cin >> month;

	cout << "\tрiк   : "; cin >> year;

	DATA obj;         // Оголошення об'єкта



	obj.message();      // Виклик функції класу message

	obj.setDate(day, month, year); // Ініціалізація дати

	obj.getDate(); // Відобразити дату
	obj.UKRmonth();
	_getch;
	goto start;



	system("pause");
	return 0;
}