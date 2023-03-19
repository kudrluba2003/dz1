// dz1_14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");

    cout << "Стоимость переговоров" << endl;
    int sto;
    cout << "Стоимость переговоров за час без скидок : " << endl;
    cin >> sto;
    int hours;
    int Day;
    cout << "Введите: количество_часов день_недели(1-7) " << endl;
    cin >> hours >> Day;
    double stoim = sto * hours;
    if (Day == 6 || Day == 7) cout << stoim - stoim * 0.2 << endl;
    else cout << stoim << endl;

    return 0;
}