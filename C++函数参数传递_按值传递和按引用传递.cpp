#include<iostream>
using namespace std;
void swap1(int a, int b);
void swap2(int *a, int *b);
void swap3(int &a, int &b);

int main()
{
	int a = 3, b = 4;
	cout << "普通值传递交换前:a = " << a <<", " << "b = " << b << endl;
	swap1(a, b);
	cout << "普通值传递交换后:a = " << a <<", " << "b = " << b << endl;
	
	cout << "地址值传递交换前:a = " << a <<", " << "b = " << b << endl;
	swap2(&a, &b);
	/*发生如下事件：
	
	int * a = &a;
	int * b = &b;
	之后利用*符号解除了引用
	*/
	cout << "地址值传递交换后:a = " << a <<", " << "b = " << b << endl;
	
	cout << "引用传递交换前:a = " << a <<", " << "b = " << b << endl;
	swap3(a, b);
	cout << "引用传递交换前:a = " << a <<", " << "b = " << b << endl;
	
	return 0;
	
 }
 
 void swap1(int a, int b)
 {
	 int temp;
	 temp = a;
	 a = b;
	 b = temp;
 }
 
 void swap2(int *a, int *b)
 {
	 
	 int temp;
	 /*
	 利用*符号解除了引用，变成了修改传递过来的该地址所指向的值
	 */
	 temp = *a;
	 *a = *b;
	 *b = temp;
 }
 
 void swap3(int &a, int &b)
 {
	 int temp;
	 temp = a;
	 a = b;
	 b = temp;
 }
