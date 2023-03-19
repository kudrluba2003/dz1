// dz1_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");
    cout << "Медианы" << endl << "Введите стороны: a b c" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    double a1 = (sqrt(2 * ((pow(a, 2) + pow(c, 2)) - pow(b, 2)))) / 2;
    double b1 = (sqrt(2 * ((pow(a, 2) + pow(b, 2)) - pow(c, 2)))) / 2;
    double c1 = (sqrt(2 * ((pow(b, 2) + pow(c, 2)) - pow(a, 2)))) / 2;
    cout << "Новые стороны: " << a1 << " " << b1 << " " << c1 << endl;
    double a2 = (sqrt(2 * ((pow(a1, 2) + pow(c1, 2)) - pow(b1, 2)))) / 2;
    double b2 = (sqrt(2 * ((pow(a1, 2) + pow(b1, 2)) - pow(c1, 2)))) / 2;
    double c2 = (sqrt(2 * ((pow(b1, 2) + pow(c1, 2)) - pow(a1, 2)))) / 2;
    cout << "Медианы: " << a2 << " " << b2 << " " << c2 << endl;

    return 0;
}
