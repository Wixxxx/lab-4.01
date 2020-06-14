// lab 4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int MaxElement(int a[], int size, int max, bool check, int i) {

	if (!check)max = a[i];

	if (max % 2 != 0)check = true;

	if (size == 1 || i == size - 1)return max;


	if ((a[i] % 2 != 0 && max < a[i]) || check)max = a[i];

	MaxElement(a, size, max, check, i = i + 1);

}

void Print(int* arr, int n) {
	string s = ", ";
	for (int i = 0; i < n; i++) {
		if (i == n - 1)
		{
			s = ".";
		}
		cout << arr[i] << s;
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "");




	for (size_t j = 0; j < 5; j++)
	{
		int size = 0;
		cout << "Введите размер массива: ";


		while (!(cin >> size) || size < 0) {
			cout << "\nОшибка! Введите целое положительное число: ";
			cin.clear();
			fflush(stdin);
		}

		int* array = new int[size];



		cout << "Заполните массив\n";

		for (size_t i = 0; i < size; i++)
		{
			cout << "Введите " << i + 1 << " элемент массива: ";
			cin >> array[i];
		}
		cout << endl;
		Print(array, size);
		int max = 0;
		max = MaxElement(array, size, array[0], false, 0);
		if ((max % 2) != 0)
			cout << "Максимальный нечетный элемент = " << max << endl;
		else cout << "Нечетного элемента нет!" << max << endl;
		cout << endl << endl;
		delete[]array;

	}


	system("pause");

}