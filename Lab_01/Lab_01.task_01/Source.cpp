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
		cout << "\n\t�������� ����\n\n";

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
			cout << "\n\tDate:" << day << " " << "����" << " " << year << endl << endl;
		}

		if (month == 2)
		{
			cout << "\n\tDate:" << day << " " << "������" << " " << year << endl << endl;
		}
		if (month == 3)
		{
			cout << "\n\tDate:" << day << " " << "�������" << " " << year << endl << endl;
		}
		if (month == 4) {
			cout << "\n\tDate:" << day << " " << "�����" << " " << year << endl << endl;
		}
		if (month == 5)
		{
			cout << "\n\tDate:" << day << " " << "������" << " " << year << endl << endl;
		}
		if (month == 6)
		{
			cout << "\n\tDate:" << day << " " << "������" << " " << year << endl << endl;
		}
		if (month == 7)
		{
			cout << "\n\tDate:" << day << " " << "�����" << " " << year << endl << endl;
		}
		if (month == 8)
		{
			cout << "\n\tDate:" << day << " " << "������" << " " << year << endl << endl;
		}
		if (month == 9)
		{
			cout << "\n\tDate:" << day << " " << "�������" << " " << year << endl << endl;
		}
		if (month == 10)
		{
			cout << "\n\tDate:" << day << " " << "������" << " " << year << endl << endl;
		}
		if (month == 11)
		{
			cout << "\n\tDate:" << day << " " << "���������" << " " << year << endl << endl;
		}
		if (month == 12)
		{
			cout << "\n\tDate:" << day << " " << "������" << " " << year << endl << endl;
		}





	}


	void getDate()

	{
		if (day > 31)
		{
			cout << "�� ����� ������� ����!" << endl;

		}
		if (month > 12)
		{
			cout << "�� ����� ������� �����!" << endl;

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

	cout << "\n\t����i�� �������� ����, �i���� i �i�: \n\n";

	cout << "\t����  : "; cin >> day;

	cout << "\t�i����: "; cin >> month;

	cout << "\t�i�   : "; cin >> year;

	DATA obj;         // ���������� ��'����



	obj.message();      // ������ ������� ����� message

	obj.setDate(day, month, year); // ����������� ����

	obj.getDate(); // ³��������� ����
	obj.UKRmonth();
	_getch;
	goto start;



	system("pause");
	return 0;
}