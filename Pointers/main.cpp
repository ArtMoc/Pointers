#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	int a = 2;
	int* pa = &a;//объявление и инициализация указателя
	cout << a << endl; //вывод значения переменной "а" на экран
	cout << &a << endl;//взятие адреса переменной "а" прямо при выводе
	cout << pa << endl;//вывод адреса переменной "а", хранящегося в указателе "ра"
	cout << *pa << endl << endl;

	int* pb; //объявление указателя
	int b = 3;
	pb = &b;
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl << endl;
	//int - int
	//int* - указатель на int
	//double - double 
	//double* - указатель на double 

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