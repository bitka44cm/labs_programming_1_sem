#include <iostream>  // МОГИЛЕВЧИК АРТЕМ 6 ГРУППА Lab_6_(A_13.1)
using namespace std;

int main ()
{
    long int n;
    bool bgu = true;
    printf("Enter your string\n");
    char s1[100];
    gets(s1);
    
    char matr[10][20];
    char *pch = strtok(s1, " ;:,.?!");
    int num_of_words = 0;
    while( pch != NULL)
    {
        strcpy(matr[num_of_words], pch);
        num_of_words++;
        pch = strtok(NULL, " ;:,.?!");
    }
    
    for (int i = 1; i < num_of_words; i++)
    {
        strcat(s1, matr[i]);
    }
    
    n = strlen(s1);
    
    for (int i = 0; i < n/2; i++)
    {
        if (s1[i] != s1[n-i-1])
        {
            bgu = false;
            break;
        }
    }
    
    if (bgu == true)
        printf("Palindrom\n");
    else
        printf("Ne Palindrom\n");
}
