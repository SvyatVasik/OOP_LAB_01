#include <iostream>
#include <conio.h>

using namespace std;

class Chas
{
private:
	int god,
		hvl,
		sec;

public:
	
	void message()

	{
		cout << "\n\t�������� ���\n\n";

	}

	void setChas(int Chas_god, int Chas_hvl, int Chas_sec)
	{
		god = Chas_god;
		hvl = Chas_hvl;
		sec = Chas_sec;

}

	void getChas()
	{
		if (god > 23)
		{
			cout << "�� ����� ������ ������!" << endl;
		}
		if (hvl > 60)
		{
			cout << "�� ����� ����� �������!" << endl;
		}
		if (sec > 60)
		{
			cout << "�� ����� ����� �������!" << endl;
		}
		else
		{
			cout<< "\n\t���:" << god << ":" << hvl << ":" << sec << endl << endl;
		}

	}

	void ukrchas()
	{

		cout << "\n\t���:" << god << " ������ " << hvl << " ������ " << sec << " ������ "<< endl << endl;

	}








};

int main()
{
start:
	system("chcp 1251");
	int god, hvl, sec;

	cout << "\n\t����i�� ������ ������ ������� � �������: \n\n";

	cout << "\t������  : "; cin >> god;

	cout << "\t�������: "; cin >> hvl;

	cout << "\t�������   : "; cin >> sec;

	Chas obj;

	obj.message();
	obj.setChas(god,hvl,sec);
	obj.getChas();
	obj.ukrchas();
	

	_getch;
	goto start;



	system("pause");
	return 0;
}

