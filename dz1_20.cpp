// dz1_20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Прямоугольник" << endl << "Введите стороны прямоугольников: a b c d" << endl;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < c && b < d || a < d && b < c) cout << "Прямоугольник со сторонами a b можно поместить в прямоугольник со сторонами c d" << endl;
    else cout << "Прямоугольник со сторонами a b нельзя поместить в прямоугольник со сторонами c d" << endl;

    return 0;
}

