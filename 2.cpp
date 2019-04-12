#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s1("compect");
	for(string::size_type ix = 0; ix != s1.size(); ix++)
	{
		s1[ix] = '$';
		cout << s1[ix] << endl;
	}
	return 0;
}

