#include<iostream>
using namespace std;
const int Cities = 5;
const int Years = 4;
int main()
{
	const char * cities[Cities] = 
	{
		"London",
		"BeiJ",
		"ShangH",
		"MiLan",
		"Paris"
	};
	
	int maxtemps[Years][Cities] = 
	{
		{10,11,12,13,14},
		{31,32,33,34,35},
		{20,21,22,23,27},
		{24,25,26,27,28}
	};
	cout << "Maximum temperatures for 2008 - 2011\n";
	for(int city = 0; city < Cities; ++ city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
		cout << maxtemps[year][city] << "\t";
	cout << endl;
	}
	return 0;
}
