#include <iostream> // Задание А5
using namespace std;
int main (){
    int n, m, kol(0), sum(0);
    cout << "Введите натуральное число: ";
    cin >> n;
    
    while (n !=0)
    {
        m = n % 10;
        kol++;
        sum = sum + m;
        n = n / 10;
    }
    
    cout << "Колличество цифр = " << kol << endl;
    cout << "Сумма цифр натурального числа = " << sum << endl << endl;
    
    system("pause");
    return 0;
}
