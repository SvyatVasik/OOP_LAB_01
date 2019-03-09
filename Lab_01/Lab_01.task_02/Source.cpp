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
		cout << "\n\tПрограма два\n\n";

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
			cout << "Ви ввели невірну годину!" << endl;
		}
		if (hvl > 60)
		{
			cout << "Ви ввели невірні хвилини!" << endl;
		}
		if (sec > 60)
		{
			cout << "Ви ввели невірні секунди!" << endl;
		}
		else
		{
			cout<< "\n\tЧас:" << god << ":" << hvl << ":" << sec << endl << endl;
		}

	}

	void ukrchas()
	{

		cout << "\n\tЧас:" << god << " година " << hvl << " хвилин " << sec << " секунд "<< endl << endl;

	}








};

int main()
{
start:
	system("chcp 1251");
	int god, hvl, sec;

	cout << "\n\tВведiть поточні годину хвилину і секунду: \n\n";

	cout << "\tгодина  : "; cin >> god;

	cout << "\tхвилина: "; cin >> hvl;

	cout << "\tсекунда   : "; cin >> sec;

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

