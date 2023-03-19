// dz1_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    cout << "Скидка" << endl << "Введите стоимость покупки: " << endl;
    int price;
    double sum;
    cin >> price;
    if (price > 1000)
        sum = price - price * 0.1;
    else sum = price;
    cout << "Сумма покупки с учетом скидки: " << sum << endl;

    return 0;
}