#include <iostream>
using namespace std;

#define HOMEWORK

void main()
{
	setlocale(LC_ALL, "Rus");
	/*int n;
	cout << "Enter a size of array: "; cin >> n;
	int* arr = new int[n] {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
	delete[] arr;*/

#ifdef HOMEWORK
	int n;
	int Even = 0, Odd = 0;
	cout << "Enter a size of array: "; cin >> n;
	int* arr = new int[n] {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] % 2 == 0 ? Even++ : Odd++;
		cout << arr[i] << '\t';
	}
	int* arr_even = new int[Even];
	int* arr_odd = new int[Odd];
	Even = 0, Odd = 0;
	for (int i = 0; i < n; i++)
	{
		arr[i] % 2 == 0 ? arr_even[Even++] = arr[i] : arr_odd[Odd++] = arr[i];
	}
	cout << endl;
	cout << "Even values: " << '\t';
	for (int i = 0; i < Even; i++) cout << arr_even[i] << '\t'; cout << endl;
	cout << "Odd values: " << '\t';
	for (int i = 0; i < Odd; i++) cout << arr_odd[i] << '\t'; cout << endl;
	delete[] arr;
	delete[] arr_even;
	delete[] arr_odd;
#endif // HOMEWORK



	/* (arr[i] % 2 == 0)
		{
			Even++;
		}
		else
		{
			Odd++;
		}*/

		/*if (arr[i] % 2 == 0)
			{
				arr_even[Even++] = arr[i];
			}
			else
			{
				arr_odd[Odd++] = arr[i];
			}*/

}