#include <iostream> // Задание А11
using namespace std;
int main(void)
{
    setlocale (LC_ALL, "Rus");
 int a, k = 0;
    cout << "Введите число: ";
 cin >> a;
 for (int i = 1; i < a; ++i)
 {
 if (a % i == 0)
 {
     k+=i;
 }
 
 }
    if (k!=a)
        cout <<  "Число не является совершенным" << endl;
    else
        cout << "Число является совершенным" << endl;

    
system("pause");
return 0;
 }
