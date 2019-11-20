# include <iostream> // Задание А2

using namespace std;

int main () {
    
    int a, b, c;
    
    cout << "Введите первое число: ";
    cin >> a ;
    
    cout << "Введите второе число: ";
    cin >> b ;
    
    c = a * b;
    while (a != b) {
        if (a > b)
            a = a - b;
        else b = b - a;
    }
    c = c / a;
    cout << "НОД: " << a << '\n' <<"НОК: " << c << '\n';
    
    system("pause");
    return 0;
}
