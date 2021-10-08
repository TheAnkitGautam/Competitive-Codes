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
    int y;
    cin >> y;
    int i = y + 1;

    while (checkDistinct(i) == false)
        i++;
    cout << i;

    return 0;
}