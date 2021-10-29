#include <clocale>
#include <iostream>
using namespace std;

int x, A1, A2, A3, flag = 0, mass[6];
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите трёхзначное число" << endl;
    cin >> x;
    while (flag == 0){
        if ((x < 100) || (x > 999)) {
            cout << "Введеное число не соответствует требованиям" << endl;
            cin >> x;
        }
        A1 = x / 100;
        A2 = (x % 100) / 10;
        A3 = x % 10;
        if ((A1 == A2) || (A2 == A3) || (A1 == A3)) {
            cout << "Есть повторяющиеся цифры, введите число повторно:\n";
            cin >> x;
            A1 = x / 100;
            A2 = (x % 100) / 10;
            A3 = x % 10;
        }
        else {
            mass[0] = A1 * 100 + A2 * 10 + A3;
            mass[1] = A1 * 100 + A3 * 10 + A2;
            mass[2] = A2 * 100 + A1 * 10 + A3;
            mass[3] = A2 * 100 + A3 * 10 + A1;
            mass[4] = A3 * 100 + A2 * 10 + A1;
            mass[5] = A3 * 100 + A1 * 10 + A2;
            flag = 1;
        }

    }

    cout << "Вывод всех перестановок" << endl << mass[0] << endl << mass[2] << endl << mass[3] << endl << mass[4] << endl << mass[5] << endl;
    int max1 = mass[0];
    for (int i = 0; i < 6; i += 1) {
        if (mass[i] > max1) {
            max1 = mass[i];
        }
    }
    cout << "Максимальная перестановка:" << endl << max1 << endl;

    return 0;
}
