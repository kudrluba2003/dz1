// dz1_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
   setlocale (LC_ALL, "Russian");

   cout << "Равнобедренный треугольник" << endl << "Введите стороны треугольника: " << endl;
   int a, b, c;
   cin >> a >> b >> c;
   if (a == b || a == c || b == c) cout << "Треугольник равнобедренный";
   else cout << "Треугольник не равнобедренный";
   

   return 0;
}