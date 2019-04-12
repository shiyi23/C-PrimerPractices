#include<iostream>
#include<cmath>

using namespace std;

struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

void Rect_to_polar(const rect * pxy, polar * pda);

void Show_polar(const polar * pda);

int main()
{
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";
	
	while(cin >> rplace.x >> rplace.y)
	{
		Rect_to_polar(&rplace, &pplace);
		Show_polar(&pplace);
		cout << "Next two numbers(q to quit): ";
	}
	
	cout << "Done.\n";
	return 0;
}

void Show_polar(const polar * pda)
{
	const double Rad_to_deg = 57.2957;
	
	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle * Rad_to_deg;
	cout << " desgrees\n";
}


void Rect_to_polar(const rect * pxy, polar * pda)
{
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	
	pda->angle = atan2(pxy->y, pxy->x);
	
	pda->angle = atan2(pxy->y, pxy->x);
	
}

