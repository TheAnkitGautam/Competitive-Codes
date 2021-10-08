#include <iostream>
using namespace std;

bool checkDistinct(int n)
{
    int arr[10] = {0};
    while (n)
    {
        int digit = n % 10;
        n /= 10;
        if (arr[digit]++)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    cout << checkDistinct(n);
    return 0;
}