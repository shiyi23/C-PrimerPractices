#include<iostream>
using namespace std;
int fill_array(double ar[], int limit)
{
	double temp;
	
	int i;
	
	for(i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ":";
		
		cin >> temp;
		
		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n');
				continue;
			cout << "Bad input; input process stopped \n";
			
			break;
		}
		else if (temp < 0)
			break;
		
		ar[i] = temp;
		
	}
	return i;
}
