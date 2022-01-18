#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

Distance bigengl(Distance, Distance);
//Distance addengl(Distance, Distance);
void engldisp(Distance);

int main()
{
	Distance d1, d2, d3;
	cout << "Enter the number of feet: ";
	cin >> d1.feet;
	cout << "Enter the number of inches: ";
	cin >> d1.inches;

	cout << "Enter the number of feet: ";
	cin >> d2.feet;
	cout << "Enter the number of inches: ";
	cin >> d2.inches;

	/*d3 = addengl(d1, d2);*/
	d3 = bigengl(d1, d2);
	cout << endl;

	/*engldisp(d1);
	cout << " + ";
	engldisp(d2);
	cout << " = ";
	engldisp(d3);
	cout << endl;*/

	cout << "\nd1 = ";
	engldisp(d1);
	cout << "\nd2 = ";
	engldisp(d2);

	cout << "\nGreatest - ";
	engldisp(d3);
	cout << endl;


	system("pause");
	return 0;
}

Distance bigengl(Distance dd1, Distance dd2)
{
	if (dd1.feet > dd2.feet)
	{
		return dd1;
	}

	if (dd1.feet < dd2.feet)
	{
		return dd2;
	}

	if ((int)dd1.inches >> (int)dd2.inches)
	{
		return dd1;
	}
	else
	{
		return dd2;
	}
}

//Distance addengl(Distance dd1, Distance dd2)
//{
//	Distance dd3;
//	dd3.inches = dd1.inches + dd2.inches;
//	dd3.feet = 0;
//
//	if (dd3.inches >= 12.0)
//	{
//		dd3.inches -= 12.0;
//		dd3.feet++;
//	}
//
//	dd3.feet += dd1.feet + dd2.feet;
//
//	return dd3;
//}

void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}