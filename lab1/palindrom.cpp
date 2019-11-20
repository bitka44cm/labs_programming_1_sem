#include <iostream> // Задание А3
using namespace std;

int main () {
    setlocale (LC_ALL, "Rus");
    int n, m (0), cifra, kol(0), a, b;
    cout << "Введите число для проверки, т.е. явл. ли оно палиндромом: ";
    cin >> n;
    a=n;
    b=n;
    while (n != 0)
    {
        kol++;
        n = n / 10;
    }
    
    
    for ( int i = 1 ; i <= kol ; i++)
    {
        cifra = a % 10;
        m = m*10 + cifra;
        a/=10;
    }
    
    
    if (m == b)
     cout << "Ваше число является палиндромом!" << endl;
    else
     cout << "Ваше число не является палиндромом!" << endl;
    system("pause");
    return 0;
}
