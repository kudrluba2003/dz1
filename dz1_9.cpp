// dz1_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");
    cout << "Сутки" << endl << "Введите количество секунд: " << endl;;
    int k;
    cin >> k;

    int min = k / 60;
    int hour = k / 3600;
    int minuts = min % 60;
    cout << "Прошло часов: " << hour << endl << "Прошло минут: " << minuts << endl;

    return 0;
}
