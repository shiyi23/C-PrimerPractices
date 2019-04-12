#include<iostream>
using namespace std;
unsigned int c_intstr(const char * str, char ch);


int main()
{
	char mmm[15] = "minimum";
	char * wail = "ululate";
	
	unsigned int ms = c_intstr(mmm, 'm');
	unsigned int us = c_intstr(wail, 'u');
	
	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail <<endl;
	
	return 0;
	
}

unsigned int c_intstr(const char * str, char ch)
{
	unsigned int count = 0;
	
	while(* str)
	{
		if( *str == ch)
			++count;
		str++;
	}
	return count;
}
