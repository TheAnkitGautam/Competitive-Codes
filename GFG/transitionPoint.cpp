#include <iostream>
using namespace std;

int transitionPoint(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] == 0 and arr[high] == 0)
            return -1;
        if (arr[0] == 1 && arr[n - 1] == 1)
            return 0;
        if (arr[mid] == 1 && arr[mid - 1] == 0)
            return mid;
        else if (arr[mid] == 1)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << transitionPoint(arr, n);
    return 0;
}