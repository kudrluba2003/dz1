#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Площадь прямоугольного треугольника и гипотенуза" << endl << "Введите: катет катет" << endl;
    int a, b;
    cin >> a >> b;
    int S = (a * b) / 2;
    double G = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Площадь ПТ: " << S << endl << "Гипотенуза: " << G << endl;

    return 0;
}

