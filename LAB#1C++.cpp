#include <iostream>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, mass[6];
	cout << "Введите число" << endl;;
	cin >> x;
	int A1 = x % 10;
	int A2 = (x % 100) / 10;
	int A3 = (x % 1000) / 100;
	if (x > 99 and x < 1000) {
		if (A1 != A2 and A2 != A3 and A1 != A3) {
			int a1 = A1 * 100 + A2 * 10 + A3;
			int a2 = A1 * 100 + A3 * 10 + A2;
			int a3 = A2 * 100 + A1 * 10 + A3;
			int a4 = A2 * 100 + A3 * 10 + A1;
			int a5 = A3 * 100 + A1 * 10 + A2;
			int a6 = A3 * 100 + A2 * 10 + A1;
			mass[0] = a1;
			mass[1] = a2;
			mass[2] = a3;
			mass[3] = a4;
			mass[4] = a5;
			mass[5] = a6;
			cout << "Перестановки " << endl;
			cout << mass[0] << endl << mass[1] << endl << mass[2] << endl << mass[3] << endl << mass[4] << endl << mass[5] << endl;
			int max1 = mass[0];
			for (int i = 0; i < 6; i += 1) {
				if (mass[i] > max1) {
					max1 = mass[i];
				}
			}
			cout << "Максимальная перестановка - " ;
			cout << max1 << endl;
		}
		else {
			cout << " Введите число повторно, есть одинаковые числа" << endl;
		}
	}
	else {
		cout << " Введенное число не соответствует требованиям " << endl;
	}
	return 0;
}