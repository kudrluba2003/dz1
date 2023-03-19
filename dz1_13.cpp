// dz1_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");

    srand(time(NULL));
    cout << "Рандом" << endl;
    int random1 = (rand() % 9) + 1;
    int random2 = (rand() % 9) + 1;
    cout << random1 << " " << random2 << endl << "Введите произведение: " << endl;
    int proizv;
    cin >> proizv;
    if (proizv == random1 * random2) cout << "Верно" << endl;
    else cout << "Неверно. Ответ: " << random1 * random2 << endl;


    return 0;
}
