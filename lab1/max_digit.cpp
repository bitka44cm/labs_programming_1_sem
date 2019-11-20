#include <iostream> // Задание А3
using namespace std;
int main ()
{
    int n, max (0);
    cout << "Введите натуральное число: ";
    cin >> n;
    
    while (n != 0)
    {
        if (n % 10 > max)
            max = n % 10;
        n/=10;
    }
    
    cout << "Максимальная цифра = " << max << endl << endl;
    
    system("pause");
    return 0;
}
