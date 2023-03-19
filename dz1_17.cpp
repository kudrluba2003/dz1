#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Копейка" << endl << "Введите количество копеек от 1 до 99: " << endl;;
    int n;
    cin >> n;
    if (n > 0 && n < 100) {
        if (n%10 == 1 && n != 11) cout << n << " копейка" << endl;
        else if ((n % 10 > 4 && n % 10 < 10) || n >= 10 && n <21 || n%10 == 0) cout << n << " копеек" << endl;
        else if (n % 10 == 2 || n % 10 == 3 || n % 10 == 4 && n != 11 && n != 12 && n != 13) cout << n << " копейки" << endl;
    }
    else cout << "Ошибка. Неверный диапазон" << endl;

    return 0;
}