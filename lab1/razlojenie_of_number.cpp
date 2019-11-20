#include <iostream> // Задание А8
using namespace std;
int main ()
{
    
int n, i=2;
    
    cout << "Введите натуральное число: " ;
    cin >> n;

while (i<=n)
{
    if (n % i == 0)
    {
        cout << i << ' ';
        n/=i;
    }
        else i++;
}
    cout << endl << endl;
    
    
    system("pause");
    return 0;
}
