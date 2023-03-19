#include <iostream>
#include <random>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Площадь трапеции" << endl;
     int b1, b2, h;
     cout << "Введите: основание_трапеции основание_трапеции высота_трапеции " << endl;
     cin >> b1 >> b2 >> h;
     double S = (b1 + b2) / 2 * h;
     cout <<"Площадь трапеции: " << S << endl;

    return 0;
}