#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copying values from Start to mid in *first
    for (int i = 0; i < len1; i++)
        first[i] = arr[s + i];

    // Copying values from mid to end in *second
    for (int i = 0; i < len2; i++)
        second[i] = arr[mid + 1 + i];

    // Now merging both first and second arrays
    int i = 0, j = 0, k = s;
    while (i < len1 and j < len2)
    {
        if (first[i] <= second[j])
            arr[k] = first[i], i++, k++;
        else
            arr[k] = second[j], j++, k++;
    }

    while (i < len1)
        arr[k] = first[i], i++, k++;

    while (j < len2)
        arr[k] = second[j], j++, k++;

    delete[] first, delete[] second;
}

void mergeSort(int *arr, int s, int e)
{

    if (s < e)
    {
        int mid = s + (e - s) / 2;

        // Sort Left Part
        mergeSort(arr, s, mid);

        // Sort Right Part
        mergeSort(arr, mid + 1, e);

        // Merging Both Parts
        merge(arr, s, e);
    }
}

int main()
{
    int arr[] = {1, 3, 12, 4, 3, 2};
    int n = 6;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
