#include <iostream> // МОГИЛЕВЧИК АРТЕМ 6 ГРУППА lab_6_(A_13.2)
using namespace std;
int main()
{
    char s1[100];
    int arr[255]={0}, max = 0,maxx=0;
    printf("Enter your srting: ");
    gets(s1);
    for (int i = 0; s1[i]; i ++)
        arr[(int)s1[i]]++;

    for(int i = 65; i < 91; i++)
    {
        arr[i+32]+=arr[i];
        arr[i]=0;
    }


    while(true)
    {
        for (int i = 97; i < 123; i ++)
        {
            if (arr[i] > arr[max])
                max = i;
        }
        //  в max кладет индекс символа, который встречается чаще всего!

        if (maxx > arr[max])  // в arr[max] лежит двойка (для примера: abca)
            break;
//        cout<< (char)max << endl;
        printf("%c\n", max);
        maxx = arr[max];
        arr[max] = 0;
    }
}

