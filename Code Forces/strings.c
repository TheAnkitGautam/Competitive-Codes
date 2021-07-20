#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10], str2[10], str[30];
    int i, j, k;
    gets(str1);
    gets(str2);
    for (i = 0, j = 0; i < str1[i] != '\0'; i++, j++)
    {
        str[j] = str1[i];
    }

    for (k = 0; i < str2[k] != '\0'; k++, j++)
    {
        str[j] = str2[k];
    }
    for (int i = 0; str[i]!='\0'; i++)
    {
        printf("%c", str[i]);
    }
    

    return 0;
}