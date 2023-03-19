// dz1_16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

    cout << "Счастливое число" << endl << "Введите шестизначное число: " << endl;
    int n;
    cin >> n;
    int a = n / 100000;
    int b = n % 100000 / 10000;
    int c = n % 10000 / 1000;
    int d = n % 1000 / 100;
    int e = n % 100 / 10;
    int f = n % 10 / 1;

    if (a + b + c == d + e + f) cout << "Число счастливое" << endl;
    else cout << "Число не счастливое" << endl;

	return 0;
}