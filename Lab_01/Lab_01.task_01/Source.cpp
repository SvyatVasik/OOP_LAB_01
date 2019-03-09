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
		cout << "\n\tÏðîãðàìà îäèí\n\n";

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
			cout << "\n\tDate:" << day << " " << "ñ³÷íÿ" << " " << year << endl << endl;
		}

		if (month == 2)
		{
			cout << "\n\tDate:" << day << " " << "ëþòîãî" << " " << year << endl << endl;
		}
		if (month == 3)
		{
			cout << "\n\tDate:" << day << " " << "áåðåçíÿ" << " " << year << endl << endl;
		}
		if (month == 4) {
			cout << "\n\tDate:" << day << " " << "êâ³òíÿ" << " " << year << endl << endl;
		}
		if (month == 5)
		{
			cout << "\n\tDate:" << day << " " << "òðàâíÿ" << " " << year << endl << endl;
		}
		if (month == 6)
		{
			cout << "\n\tDate:" << day << " " << "÷åðâíÿ" << " " << year << endl << endl;
		}
		if (month == 7)
		{
			cout << "\n\tDate:" << day << " " << "ëèïíÿ" << " " << year << endl << endl;
		}
		if (month == 8)
		{
			cout << "\n\tDate:" << day << " " << "ñåðïíÿ" << " " << year << endl << endl;
		}
		if (month == 9)
		{
			cout << "\n\tDate:" << day << " " << "âåðåñíÿ" << " " << year << endl << endl;
		}
		if (month == 10)
		{
			cout << "\n\tDate:" << day << " " << "æîâòíÿ" << " " << year << endl << endl;
		}
		if (month == 11)
		{
			cout << "\n\tDate:" << day << " " << "ëèñòîïàäà" << " " << year << endl << endl;
		}
		if (month == 12)
		{
			cout << "\n\tDate:" << day << " " << "ãðóäíÿ" << " " << year << endl << endl;
		}





	}


	void getDate()

	{
		if (day > 31)
		{
			cout << "Âè ââåëè íåâ³ðíèé äåíü!" << endl;

		}
		if (month > 12)
		{
			cout << "Âè ââåëè íåâ³ðíèé ì³ñÿöü!" << endl;

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

	cout << "\n\tÂâåäiòü ïîòî÷íèé äåíü, ìiñÿöü i ðiê: \n\n";

	cout << "\täåíü  : "; cin >> day;

	cout << "\tìiñÿöü: "; cin >> month;

	cout << "\tðiê   : "; cin >> year;

	DATA obj;         



	obj.message();      

	obj.setDate(day, month, year);

	obj.getDate();
	obj.UKRmonth();
	_getch;
	goto start;



	system("pause");
	return 0;
}
