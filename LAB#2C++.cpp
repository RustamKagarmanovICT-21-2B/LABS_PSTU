#include <iostream>
#include <clocale>
#include <time.h>
using namespace std;
int main(void)
{
	int rnum;
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	rnum = rand() % 101;
	cout << "Угадайте число от 1 до 100" << endl;
	for (int i = 1; i <= 7; i += 1) {
		int temp;
		cout << 8 - i << " попыток осталось" << endl;
		cin >> temp;
		if (temp != rnum) {
			if (rnum > temp)
				cout << "Введенное число <" << endl;
			else
				cout << "Введенное число >" << endl;
		}
		else {
			cout << "Поздравляю, вы отгадали число";
			return 0;
		}
	}
	cout << endl << "Вы не отгадали число, число - " << rnum;
	return 0;
}
