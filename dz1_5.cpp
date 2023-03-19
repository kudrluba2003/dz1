// dz1_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    setlocale(LC_ALL, "Russian");
    cout << "Перевод из декартовой системы в полярную" << endl << "Введите: x y" << endl;
    double x, y;
    cin >> x >> y;
    double p = sqrt(pow(x, 2) + pow(y, 2));
    double fi = atan(y/x);
    cout << "Результат: " << "p = " << p << endl << "fi = " << fi << endl;

    return 0;
}
