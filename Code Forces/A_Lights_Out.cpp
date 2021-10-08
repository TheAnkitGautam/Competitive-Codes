#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j])
            {
                b[i][j] += a[i][j];
                if (i > 0)
                    b[i - 1][j] += a[i][j];
                if (i < 2)
                    b[i + 1][j] += a[i][j];
                if (j > 0)
                    b[i][j - 1] += a[i][j];
                if (j < 2)
                    b[i][j + 1] += a[i][j];
            }
        }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", b[i][j] & 1 ^ 1);
        }
        printf("\n");
    }
    return 0;
}