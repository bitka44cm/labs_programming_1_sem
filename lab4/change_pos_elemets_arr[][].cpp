#include <iostream>            // Могилевчик Аретм
#include <ctime>               // 13 Варинт
using namespace std;
void Input (int arr[10][10], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = rand() % 10;
}

void Output1 (int arr[10][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}

void Output2(int arr[10][10], int n)
{
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j ++)
            cout << arr[j][i] << ' ';
        cout << endl;
    }
}

void Output3(int arr[10][10], int n)
{
    for ( int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n - i; j ++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}

void Output4(int arr[10][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << arr[i][j] << ' ';
        cout <<endl;
    }
}

void Output5(int arr[10][10], int n)
{
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j ++)
        {
            if ( (i == j) || ( (i + j) == n - 1 )  )
                cout << arr[i][j] << ' ';
            else
                cout << ' ' << ' ';
        }
        cout << endl;
    }
}

int main ()
{
    setlocale(LC_ALL, "rus");
    int size;
    cout << "Введите размер матрицы (size <= 10): ";
    cin >> size;
    if (size > 10 || size < 1)
        cout << "Вы ввели неправильный размер!" << endl;
    else
    {
    int arr[10][10];
    srand(time(NULL));
    
    Input(arr, size);

    Output1(arr, size);
    
    cout << endl << "Отражение относительно главной диагонали матрицы" << endl << endl;
    
    Output2 (arr, size);
    
    cout << endl << "Пример №1" << endl << endl;
    
    Output3(arr, size);
    
    cout << endl << "Пример №2" << endl << endl;
    
    Output4(arr, size);
    
    cout << endl << "Пример №3" << endl << endl;
    
    Output5(arr, size);
    }
    system("pause");
}
