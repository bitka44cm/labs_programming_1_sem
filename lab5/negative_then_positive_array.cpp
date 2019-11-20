#include <iostream>
using namespace std;

void Inputarr (int arr[], int n)
{
    cout << "Enter elemets of array: ";
    for ( int i = 0; i < n; i ++)
        cin >> arr[i];
}

void Outputarr (int arr[],int n)
{
    cout << "New array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << '\t';
    cout << endl;
    cout << endl;
}

int Polchisla(int arr[], int n)
{
    int kol = 0;
    for (int i = 0; i < n; i ++)
    {
        if (arr[i] >= 0)
            kol++;
    }
    return kol;
}

void Reverse(int *ptr, int size)
{
    for (int i = 0; i < size/2; i++)
        swap (ptr[i], ptr[size - i - 1]);
}

int main ()
{
    int n;
    cout << "Enter number of your array: ";
    cin >> n;
    int *arr = new int [n];
    Inputarr(arr, n);
    cout << "Positive array numbers: " << Polchisla (arr, n) << endl;
    int *arr2 = new int [n];
    int ptr1 = 0;
    int ptr2 = n - 1;
    for (int i = 0; i < n; i++)
        if (arr[i] < 0)
            arr2[ptr1++] = arr[i];
        else
            arr2[ptr2--] = arr[i];
    Reverse(arr2 + ptr1, n - ptr1);
    Outputarr(arr2, n);
    delete [] arr;
}
