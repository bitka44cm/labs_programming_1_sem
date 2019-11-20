#include <iostream> // Задание А15
using namespace std;

int main()
{
    int n, a = 1, b = 1, c = 0;
    cout << "Введите номер числа Фибоначчи: ";
    cin>>n;
    
    if (n<=2) cout<< "Результат = " << 1 << endl;
    
    else{
    for (int i=3; i<=n; i++) {
        c=a+b;
        a=b;
        b=c;
    }
    cout << "Результат = " << c << endl;
}
    
    system("pause");
    return 0;
}
