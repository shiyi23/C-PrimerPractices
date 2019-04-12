#include<iostream>
using namespace std;
int main()
{
	int maxtemps[4][5] = 
	{
		
			{96, 100, 88, 95,101},
			{55, 66, 42, 271, 46},
			{12, 28, 91, 100, 120},
			{22, 17, 77, 10, 490}
	};
	
	for(int row = 0; row < 4; row++)
	{
		for(int col = 0; col < 5; col++)
		cout << maxtemps[row][col] << "\t";
			cout << endl;
	}
	
	
	return 0;
}




