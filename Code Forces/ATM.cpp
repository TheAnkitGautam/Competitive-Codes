#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int x;
    float y, z;
    cin >> x >> y;
    if (x < 2000 && y < 2000)
    {
        if (x > y)
            printf("%.2f", y);

        else if (x % 5 == 0)
        {
            z = y - x - 0.50;
            printf("%.2f", z);
        }
        else
            printf("%.2f", y);
    }

    return 0;
}