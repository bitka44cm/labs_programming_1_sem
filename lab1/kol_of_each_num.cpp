#include <iostream> //  Задание A6
using namespace std;
int main () {
    
    setlocale (LC_ALL, "Rus");
    
    int n, k = 0;
    cout << "Введите натуральное число: " ;
    cin >> n;
    for (int i = 0; i <= 9; i++)
    {
    int a = 0, b = n;            // b число
        while (b != 0)
        {
            int ostatok = b % 10;
            b /= 10;
            if (ostatok == i)
            {
                a++;
            }
        }
        if (a != 0)
        {k++; }
    }
    cout << "Коёличество различных цифр у натурального числа: " << k << endl << endl;
    
    system("pause");
    
    return 0;
}








