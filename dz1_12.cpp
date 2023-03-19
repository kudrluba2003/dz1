// dz1_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Похудение" << endl << "Введите: вес рост" << endl;
    int weight, height;
    cin >> weight >> height;
    if (height - weight > 100) cout << "Надо набрать " << (height - weight) - 100 << " кг" << endl;
    else if (height - weight < 100) cout << "Надо похудеть на " << (height - weight) - 100 << " кг" << endl;
    else cout << "Вес в норме" << endl;

    return 0;
}
