#include <iostream>// Библиотека для работы с потоками ввода-вывода
#include <cmath>
using namespace std;// Пространство имен std
double j, w, Z;
int main()// Основное тело программы
{
j=cos(10);// Описание переменных
w=sin(5);
Z=(j+w)/(j-w);
cout <<"Z = "<< Z;
} 