#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < t; j++)
    {
        for (int k = j + 1; k < 5; k++)
        {
            if (arr[j] > arr[k])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
        cout << arr[j] << endl;
    }

    return 0;
}