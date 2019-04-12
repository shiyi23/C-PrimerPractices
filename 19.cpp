#include<iostream>
#include<string>
#include<array>

using namespace std;

double Cube(double a);

double Refcube(double& ra);

int main()
{
	double x = 3.0;
	
	cout << Cube(x);
	cout << " = cube of " << x << endl;
	cout << Refcube(x);
	
	cout << " = cube of " << x << endl;
	return 0;
}

double Cube(double a)
{
	a *= a * a;
	return a;
}

double Refcube(const double& ra)
{
	return ra * ra * ra;
}

