﻿#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    //включение возможности писать русским языком
    cout << "Введите число галоннов\n";
    float  i;//переменная типа float используется для деления с запятой
    cin >> i;//ввод данных
    i = i / 7.481;
    /* при делении число получается с запятой т.к.
    i и число 7.481 являются типом float*/
    cout << "Число галлонов в куб.футах\n" << i;//вывод
    return 0;
}