﻿#include <iostream>
using namespace std;
int main() {
    //резервирование места для переменных с типом int
    int b, c; 
    /* тоже резервирование с типом int, 
    но теперь переменная является константой и равна 10 */
    const int a = 10;
    //вывод а с типом конст
    cout << a << '\n';
    //присваивание b значения - 20
    b = 20;
    //вывод b
    cout << b << '\n';
    /*присваивание переменной c значения b--,
    то есть с помощью декремента*/
    c = --b;
    //вывод переменной 
    cout << c;
    return 0;
}