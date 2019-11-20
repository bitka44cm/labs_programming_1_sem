#include <iostream> // Могилевчик Артем. Вариант 13
#include <ctime>
#include <iomanip>
using namespace std;

int s;

void cinarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i] = 1 + rand() % 100;
}

void couta(int a[],int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(5) << a[i] << ' ';
    cout << "\n\n";
}

bool ifsumeven(int n)
{
    s = 0;
    while (n)
    {
        s += n % 10;
        n /= 10;
    }
    
    if (s % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int a[100];
    int n;
    srand(time(NULL));
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cinarray (a, n);
    
    couta(a, n);
    cout << endl;
    
    for (int i = 0; i < n; i++)
        if (ifsumeven(a[i])!=0)
            cout << setw(5) << a[i] << ' ';
    
    for (int i = 0; i < n; i++)
        if (ifsumeven(a[i])!=1)
            cout << setw(5) << a[i] << ' ';
    
    cout << endl;
    
    system("pause");
    return 0;
}
