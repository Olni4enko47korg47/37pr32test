#include"Date.h"


int main() {
	Date a, b;
	a.fillDate();
	b.fillDate();

	a.printDate();
	b.printDate();

	Date c;
	c.setNowDate();
	c.printDate();
	cout << endl;
	cout << " string " << c.toString() << endl;

	if (strcmp(a.toString(),b.toString() == 0)

	{
		cout<< " dates are equal "
	}


	return 0;
}