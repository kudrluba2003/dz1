// dz1_19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Данное число 19.1 (произведение)" << endl << "Введите число: " << endl;
    int n;
    cin >> n;
    int proizv = 1;

    while (n != 0)
    {
        proizv *= n % 10;
        n /= 10;
    }
    cout << "Произведение цифр равно: " << proizv << endl;
    int b;
    cout << "Введите b для проверки: " << endl;
    cin >> b;
    if (proizv > b) cout << "Произведение цифр больше введенного числа" << endl;
    else cout << "Произведение цифр меньше либо равно введенному числу" << endl;


    cout << "Данное число 19.2 (сумма)" << endl << "Введите число: " << endl;
    int nn;
    cin >> nn;
    int sum = 0;

    while (nn != 0)
    {
        sum += nn % 10;
        nn /= 10;
    }
    cout << "Сумма цифр равна: " << sum << endl;

    if (sum % 7 == 0) cout << "Число кратно 7" << endl;
    else cout << "Число из суммы цифр не кратно 7" << endl;


        return 0;
}
