#include<iostream>
using namespace std;
int main()
{
	double arr[5] = {21.2, 32.8, 23.4, 45.2, 37.4};
	double *pt = arr;//ָ��21.2 
	++ pt;//ָ��32.8 
	double x = * ++ pt;//ָ��23.4��ȡ��23.4 
	++ * pt;//23.4 + 1�õ�24.4��������Ȼָ��24.4 
	( * pt ) ++;//25.4������Ȼִ��arr[2] 
	x = * pt ++;//�Եõ�25.4,����ִ����ֻ��һ���ִ��arr[3] 
	cout << "x = " << x << endl;
	return 0;
}
