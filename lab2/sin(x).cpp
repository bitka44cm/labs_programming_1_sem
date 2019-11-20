#include <iostream>                  // Могилевчик Артем, 6 группа
#include <math.h>                    // Лабораторная работа №2 вариант 13 задание из Б части
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, h, m;
    
//    cout << "Введите х: ";
    printf ("Введите х: ");
    
//    cin >> a;
    scanf("%lf", & a);
    
//    cout << "Введите число b, до которого будет изменятся x: ";
    printf ("Введите число b, до которого будет изменятся x: ");
    
//    cin >> b;
    scanf("%lf", & b);
    
//    cout << "Введите h, т.е. с каким шагом будет изменятся ваш х: ";
    printf ("Введите h, т.е. с каким шагом будет изменятся ваш х: ");
    
//    cin >> h;
    scanf("%lf", & h);
link:
//    cout << "Введите число m: ";
    printf ("Введите число m, большее пяти: ");
    
//    cin >> m;
    scanf("%lf", & m);
    if (m<5)
        goto link;

    
//    cout << "-------X-----------------------------sum----\n";
    printf ("-------X-----------------------------sum----\n");
    while (a <= b)
    {
        
//        cout << "|";
        printf ("|");
        
//        cout.width(12);
//        cout << setprecision(4) << a;
        printf ("%20.9lf", a);
        
        double sum = 0;
        for (double i = 5; i <= m; i = i + 1)
        {
            sum += pow(a, 2 * i + 1) / (2 * i + 1) * sin(a * i);
        }
//        cout << " | ";
        printf (" | ");
        
//        cout.width(12);
//        cout << setprecision(4) << sum;
        printf ("%20.4lf", sum);
        
//        cout << "|\n";
        printf ("|\n");
        
        a += h;
    }
    
//    cout << "--------------------------------------------\n";
    printf ("--------------------------------------------\n");

    system ("pause");
    return 0;
}
