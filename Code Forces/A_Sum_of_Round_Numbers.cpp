#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t, num, b, res = 1, c = 0, i = 0;
    int arr[100];
    cin >> t;
    for (int i = 0; i <= t; i++)
    {
        cin >> num;
        while (num != 0)
        {
            b = num % 10;
            res = b * pow(10, i);
            arr[i] = res;
            if (b != 0)
            {
                c++;
            }
            i++;
            num /= 10;
        }
        cout << c << endl;
        for (int k = 0; k < i; k++)
        {
            if (arr[k] != 0)
                cout << arr[k] << " ";
        }
    }

    return 0;
}