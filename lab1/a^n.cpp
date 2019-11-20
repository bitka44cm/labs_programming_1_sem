#include <iostream> // Задание А9

using namespace std;
int main () {
    
    int a,n,d(1);
    
    cout << "Введите число: ";
    cin >> a;
    
    cout << "Введите степень: ";
    cin >> n;
    
    for ( int i = 1; i <= n ; i++)
    {
        d*=a;
    }
    cout << "result = " << d << endl << endl;
    
    
    system("pause");
    return 0;
}
