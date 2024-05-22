#include <iostream>
using namespace std;
int main()
{
    float notas[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Bienvenido a la calculadora de promedio " << "\n";
        cout << "Introduzca su nota " << "\n";
        cin >> notas[i];
    }
    for (int j = 0; j < 6; j++)
    {
        cout << "Sus notas son " <<notas[j]<< "\n";
        float promedio=0;
        promedio=notas[0]+notas[1]+notas[2]+notas[3]+notas[4]+notas[5]+notas[6];
        promedio = promedio/6;
        cout << "Su promedio es de=  " <<promedio<< "\n";
    }
}