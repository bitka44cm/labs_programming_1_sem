#include <iostream>
using namespace std;

void Inputarr(int **arr, int n)
{
    int i, j, k;
    int num = 1;
    for ( i = 0; i < n/2 + 1; i ++)
    {
        for ( j = 0 + i; j < n - i; j ++)
        {
            arr[i][j] = num;
            num ++;
        }
        for ( k = i + 1; k < n - i; k ++)
        {
            arr[k][j - 1] = num;
            num ++;
        }
        for ( j = n - i - 2;  j >= i; j --)
        {
            arr[k - 1][j] = num;
            num++;
        }
        for ( k = n - i - 2; k > i; k --)
        {
            arr[k][j + 1] = num;
            num ++;
        }
    }
}

void Outputarr (int **arr, int n)
{
    for (int i = 0; i < n; i ++)
    {
        for ( int j = 0; j < n; j ++)
            cout << arr[i][j] << '\t';
        cout << endl;
    }
}

void Deletearr (int **arr, int n)
{
    for (int i = 0; i < n; i ++)
        delete [] arr[i];
    delete [] arr;
}

int main ()
{
    int n, num;
    cout << "Enter matrix size: ";
    cin >> n;
    int **arr = new int*[n];
    for (int i = 0; i < n; i ++)
    {
        arr[i] = new int [n];
    }
    Inputarr(arr, n);
    Outputarr(arr, n);
    Deletearr(arr, n);
}















