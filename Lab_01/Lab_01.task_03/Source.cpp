#define _USE_MATH_DEFINES
#include <iostream>
#include <conio.h>
#include <math.h>



using namespace std;

class plo
{
public:
	plo() { int r; }
	plo(int a) { r = a; }
	int getr() { return r; }
	void setr(int a) { r = a; }

	void geting() {

		cout << "����� �������=" << endl;
		cin >> r;
	}
	
	void print(void)
	{
		double g;
		g = r * r*M_PI;
		cout <<"����� �����="<< g << endl;

		double h;
		h = 2 * r*M_PI;
		cout <<"������� ����="<< h << endl;



	}
	void setkoor(int a, int b,int c)
	{
		x = a;
		y = b;
		z = c;


	}

	void getkoor()
	{
		cout << "\n\t���������� ������ ����:" <<'('<< x << "," << y << "," << z<<')' << endl << endl;
	}




	~plo();

private:
	int r;
	int x,
		y,
		z;

};

int main()
{
start:
	system("chcp 1251");
	int x, y, z;
	cout << "\t���������� x= "; cin >> x;

	cout << "\t���������� y= "; cin >> y;

	cout << "\t���������� z= "; cin >> z;
	
	int r;
	plo obj;
	obj.geting();
	obj.getr();
	obj.print();
	obj.setkoor(x, y, z);
	obj.getkoor();
	

	
	goto start;

	
	obj.~plo();
	system("pause");

}


plo::~plo()
{
	
}
