#include <iostream> // Задание А4
using namespace std;
int main () {
    int n;
    
    cout << "Введите натуральное число: ";
    cin >> n;
    bool a = 0;
    for (int i = 2; i < n ; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
        if (a==1)
        {
            cout << "Число не простое" << endl;
        }
        else
        {
            cout << "Число простое" << endl << endl;
        }
        
    
    system("pause");
    return 0;
}
