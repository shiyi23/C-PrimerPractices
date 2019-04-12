#include<iostream>
#include<cstring>
using namespace std;

char * getName()
{
	char temp[80];
	cout << "Enter last name: ";
	cin >> temp;
	
	char * pn = new char[strlen(temp) + 1];
	
	strcpy(pn, temp);
	
	return pn;
}


int main()
{
	char* name;
	name = getName();
	cout << name << " at " << (int *)name << endl;
	delete [] name;
	
	name = getName();
	cout << name << " at " << (int *)name << endl;
	delete [] name;
	return 0;
}


