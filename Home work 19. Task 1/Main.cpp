
#include <algorithm>
#include <iostream>
using namespace std;

//������1
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
//������ 2
int mirror_number(int num) {
	int reverse = 0;
	while (num > 0) {
		int rem = num % 10;
		reverse = reverse * 10 + rem;
		num /= 10;
	}

	return reverse;
}

//������ 3
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
	cout << "������ 1.\n�������, ������������ ���������� ��������\n";
	cout << "������� ������ �����: \n";
	cin >> n;
	cout << "������� ������ �����: \n";
	cin >> m;
	cout << func_del(n, m);


	int a;
	cout << "������ 2.\n���������� ��������� ����\n";
	cout << "������� �����: \n";
	cin >> a;
	cout << "��������� ����������� ����� �������� ��� " << mirror_number(a) << "\n\n";


	int �;
	cout << "������ 3.\n������� ���������� ������ ������� �����" <<
		", ��������� ��� �������� ������ �� �����\n";
	const int size = 10;
	int mass[size];
	cout << "��������� ������. ������� �����: \n";
	for (int i = 0; i < size; i++) {
		cin >> mass[i];
	}
	for (int i = 0; i < size; i++)
		cout << mass[i] << " , ";
	cout << "\n������� ����� �� ������� ����� ������ ��� �������: \n";
	cin >> c;
	cout << "\n������� ����� = " << search_index(mass, size, �);




	return 0;
}