#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	int a = 2;
	int* pa = &a;//���������� � ������������� ���������
	cout << a << endl; //����� �������� ���������� "�" �� �����
	cout << &a << endl;//������ ������ ���������� "�" ����� ��� ������
	cout << pa << endl;//����� ������ ���������� "�", ����������� � ��������� "��"
	cout << *pa << endl << endl;

	int* pb; //���������� ���������
	int b = 3;
	pb = &b;
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl << endl;
	//int - int
	//int* - ��������� �� int
	//double - double 
	//double* - ��������� �� double 

	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << '\t';
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << '\t';
	}
	cout << endl;
}