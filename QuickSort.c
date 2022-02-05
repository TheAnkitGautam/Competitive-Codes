#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];

    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[r]);

    return (i + 1);
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pivotIndex = partition(arr, l, r);

        quickSort(arr, l, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, r);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}