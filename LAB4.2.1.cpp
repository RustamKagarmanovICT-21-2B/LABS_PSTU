#include <iostream>
using namespace std;
int main() {
    //для использования русского языка
    setlocale(LC_ALL, "Russian");
    cout << "Введите значение градусов\n";
    //использование float для деления с запятой
    float f;
    cin >> f;
    //формула для перевода градусов
    f = (f - 32) * 5 / 9;
    //вывод
    cout << "Градусы по цельсьию - " << f;
    return 0;
}