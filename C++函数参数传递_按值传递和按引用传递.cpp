#include<iostream>
using namespace std;
void swap1(int a, int b);
void swap2(int *a, int *b);
void swap3(int &a, int &b);

int main()
{
	int a = 3, b = 4;
	cout << "��ֵͨ���ݽ���ǰ:a = " << a <<", " << "b = " << b << endl;
	swap1(a, b);
	cout << "��ֵͨ���ݽ�����:a = " << a <<", " << "b = " << b << endl;
	
	cout << "��ֵַ���ݽ���ǰ:a = " << a <<", " << "b = " << b << endl;
	swap2(&a, &b);
	/*���������¼���
	
	int * a = &a;
	int * b = &b;
	֮������*���Ž��������
	*/
	cout << "��ֵַ���ݽ�����:a = " << a <<", " << "b = " << b << endl;
	
	cout << "���ô��ݽ���ǰ:a = " << a <<", " << "b = " << b << endl;
	swap3(a, b);
	cout << "���ô��ݽ���ǰ:a = " << a <<", " << "b = " << b << endl;
	
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
	 ����*���Ž�������ã�������޸Ĵ��ݹ����ĸõ�ַ��ָ���ֵ
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
