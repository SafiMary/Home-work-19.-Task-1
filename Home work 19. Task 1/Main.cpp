
#include <algorithm>
#include <iostream>
using namespace std;

//Задача1
int func_del(int num1, int num2) {
	int del;
	if (num1 == num2)
		return num1;
	int d = num1 - num2;
	if (d < 0) {
		d = -d;
		del = func_del(num1, d);
	}
	else {
		del = func_del(num2, d);
	}
	return del;

}
//Задача 2
int mirror_number(int num) {
	int reverse = 0;
	while (num > 0) {
		int rem = num % 10;
		reverse = reverse * 10 + rem;
		num /= 10;
	}

	return reverse;
}

//Задача 3
template <typename T>
int search_index(T arr[], const int length, T value) {
	for (int i = 0; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
	sort(arr[], arr[] + value);
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Задача 1.\nФункция, возвращающая наибольший делитель\n";
	cout << "Введите первое число: \n";
	cin >> n;
	cout << "Введите второе число: \n";
	cin >> m;
	cout << func_del(n, m);


	int a;
	cout << "Задача 2.\nЗеркальное отражение цифр\n";
	cout << "Введите число: \n";
	cin >> a;
	cout << "Отражение переданного числа выглядит так " << mirror_number(a) << "\n\n";


	int с;
	cout << "Задача 3.\nФункция возвращает первую позицию числа" <<
		", сортирует все элементы справа от числа\n";
	const int size = 10;
	int mass[size];
	cout << "Заполняем массив. Введите числа: \n";
	for (int i = 0; i < size; i++) {
		cin >> mass[i];
	}
	for (int i = 0; i < size; i++)
		cout << mass[i] << " , ";
	cout << "\nВведите число из массива чтобы узнать его позицию: \n";
	cin >> c;
	cout << "\nПозиция числа = " << search_index(mass, size, с);




	return 0;
}