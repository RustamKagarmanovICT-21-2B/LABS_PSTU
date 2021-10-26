#include <iostream>
#include <clocale>
#include <ctime>
using namespace std;
int random(int a, int b)
{
	srand(time(NULL));
	if (a > 0) return a + rand() % (b - a);
	else return a + rand() % (abs(a) + b);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int temp;
	int number = random(1, 100);
	cout << "Попробуйте угадать число" << endl;
	for (int i = 1; i <= 7; i+=1) {
		cout << 8 - i << " попыток осталось" << endl;
		cin >> temp;
		if (number != temp) {
			if (temp > number)
				cout << "Введенное число >" << endl;
			else
				cout << "Введенное число <" << endl;
		}
		else {
			cout << "Поздравляю, вы отгадали число";
			return 0;
		}
	}
	cout << endl << "Вы не отгадали число, число - " << number;
	return 0;
}
