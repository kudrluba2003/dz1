// dz1_18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

int main()
{
 setlocale(LC_ALL, "Russian");
 cout << "Палиндром" << endl << "Введите число: " << endl;;
int n;
cin >> n;
int a = n / 1000;
int b = n % 1000 / 100;
int c = n % 100 / 10;
int d = n % 10 / 1;
if (a == d && b == c) cout << "Введенное число - палиндром" << endl;
else cout << "Введеное число не является палиндромом" << endl;

return 0;
}