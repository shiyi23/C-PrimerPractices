#include<iostream>
using namespace std;
int main()
{
	double arr[5] = {21.2, 32.8, 23.4, 45.2, 37.4};
	double *pt = arr;//指向21.2 
	++ pt;//指向32.8 
	double x = * ++ pt;//指向23.4并取得23.4 
	++ * pt;//23.4 + 1得到24.4，并且仍然指向24.4 
	( * pt ) ++;//25.4并且仍然执行arr[2] 
	x = * pt ++;//仍得到25.4,但是执行完只这一句后执行arr[3] 
	cout << "x = " << x << endl;
	return 0;
}
