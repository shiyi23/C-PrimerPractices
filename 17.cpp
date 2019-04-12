#include<iostream>
#include<string>

using namespace std;

const int SIZE = 5;

void Display(const string sa[], int n);

int main()
{
	string list[SIZE];
	
	cout << "Enter your" << SIZE << " favorite astronomical sights \n";
	for(int i = 0; i < SIZE; ++i)
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);//?? getline(cin,list[i]); 
		//???????? (??) ?? ?????,??? string ??? ?? list[i] ??
	}	//cin ?? std::cin ??????. ????? string list[5]; list ? string ???,?5???,???????1????
	
	cout << "Your list :\n";
	
	Display(list, SIZE);
	
	return 0;

}

void Display(const string sa[], int n)
{
	for(int i = 0; i < n; ++i)
		cout << i + 1 << ": " << sa[i] << endl;
}





