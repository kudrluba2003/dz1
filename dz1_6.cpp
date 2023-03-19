// dz1_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Перевод из полярной системы в декартову" << endl << "Введите: p fi" << endl;;
    int p, fi;
    cin >> p >> fi;
    int y = p * sin(fi);
    int x = p * cos(fi);
    cout << "Результат x: " << x << endl << "Результат y: " << y << endl;

    return 0;
}
