// dz1_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");


    cout << "Корни квадратного уравнения" << "Введите: a b c" << endl;
    double a, b, c, x1, x2;
    cin >> a >> b >> c;
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
    cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;

    return 0;
}

