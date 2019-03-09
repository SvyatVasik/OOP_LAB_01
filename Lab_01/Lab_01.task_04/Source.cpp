#include <iostream>
#include <conio.h>

using namespace std;

class rectangle
{
public:
	rectangle()
	{
		int h; int w;
	}
	rectangle(int a, int b)
	{
		h = a;
		w = b;
	}
	int getH()
	{
		return h;
	}
	int getW()
	{
		return w;
	}

	void SetH(int a, int b) 
	{
		h = a; 
		w = b;
	}


	void getingh() {

		cout << "висота дорівнює=" << endl;
		cin >> h;
	}

	void getingw() {

		cout << "ширина дорівнює=" << endl;
		cin >> w;
	}


	void print(void)
	{
		int n;
		n = h*w;
		cout << "Площа прямокутника=" << n << endl;

		int m;
		m = 2*(h+w);
		cout << "периметр прямокутника=" << m << endl;



	}

	void data(void) 
	{

		int a, b;
		cout << "\tвисота= "; cin >> h;

		cout << "\tширина= "; cin >> w;
	}

	~rectangle();



	

private:

	int h,
		w;
		

};

int main()
{
start:
	system("chcp 1251");
	rectangle obj;
	obj.getH();
	obj.data();
	obj.getW();
	obj.print();
	goto start;

	obj.~rectangle();
	system("pause");




}
rectangle::~rectangle()
{

}
