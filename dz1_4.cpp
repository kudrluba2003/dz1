#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Сумма цифр числа" << endl << "Введите четырехзначное число" << endl;
    int n;
    int sum = 0;
    cin >> n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "Сумма цифр: " << sum << endl;

    return 0;
}