#include <iostream> // Вариант 13 Голландский флаг
#include <ctime>
using namespace std;

void Input(int arr[100], int arr2[3], int n)
{
    for (int i=0; i<n; ++i)
    {
        arr[i] = rand() % 3;
        arr2[arr[i]]++;
    }
}

void Output (int arr[3])
{
    for (int i=0;i<3;++i)
        for (int j=0;j<arr[i];++j)
            cout << i <<" ";
}

int main()
{
    int n;
    srand(time(NULL));
    cout << "Task of the dutch flag\nEnter the number of elements in the array: ";
    cin >> n;
    int a[100],b[3]={};
    Input (a, b, n);
    Output (b);
    cout << endl;
    return 0;
}
