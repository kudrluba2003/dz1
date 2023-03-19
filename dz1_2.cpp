// dz1_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Площадь круга и длина окружности" << endl << "Введите радиус: " << endl;
    int r;
    cin >> r;
    double L = 2 * 3.14 * r;
    double S = 3.14 * pow(r, 2);
    cout << "Длина окружности: " << L << endl << "Площадь круга: " << S << endl;

    return 0;
}
