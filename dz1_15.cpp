// dz1_15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Номер месяца" << endl << "Введите номер месяца" << endl;
    int m;
    cin >> m;
    if (m == 1) cout << "Январь.Зима" << endl;
    else if (m == 2) cout << "Февраль.Зима" << endl;
    else if (m == 3) cout << "Март.Весна" << endl;
    else if (m == 4) cout << "Апрель.Весна" << endl;
    else if (m == 5) cout << "Май.Весна" << endl;
    else if (m == 6) cout << "Июнь.Лето" << endl;
    else if (m == 7) cout << "Июль.Лето" << endl;
    else if (m == 8) cout << "Август.Лето" << endl;
    else if (m == 9) cout << "Сентябрь.Осень" << endl;
    else if (m == 10) cout << "Октябрь.Осень" << endl;
    else if (m == 11) cout << "Ноябрь.Осень" << endl;
    else if (m == 12) cout << "Декабрь.Зима" << endl;
    else cout << "Ошибка. Диапазон от 1 до 12" << endl;

        return 0;
}
