#include <iostream>    // МОГИЛЕВЧИК АРТЕМ 6 ГРУППА lab_6_B
using namespace std;

int main ()
{
    char s1[30];
    printf("Enter\n");
    gets(s1);
    long int n = strlen(s1);
    int sum1 = 0, sum2 = 0;             // в sum1 - четные    в sum2 - нечетные
    
    if (n > 13)
    {
        printf("!!! ERROR !!!\n");
        return 0;
    }
    
    for(int i = 0; i < 13; i++)
    {
        if((int)s1[i] > 9)
        {
            printf("! ERROR !\n");
            return 0;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum2 += s1[i];
        else
            sum1 += s1[i];
    }
    
    if ((3*sum1 + sum2)%10 == 0)
        printf("True\n");
    else
        printf("False\n");
    
    return 0;
}
