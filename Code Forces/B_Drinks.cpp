#include <iostream>
using namespace std;

int main()
{
    float n;
    cin >> n;
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        float num;
        cin >> num;
        sum += num;
    }
    cout << sum / n;

    return 0;
}