#include <stdio.h>

void merge(int *arr, int l, int r)
{
    int mid = (l + r) / 2;

    int len1 = mid - l + 1;
    int len2 = r - mid;

    int left[len1];
    int right[len2];

    for (int i = 0; i < len1; i++)
        left[i] = arr[l + i];

    for (int i = 0; i < len2; i++)
        right[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < len1 && j < len2)
    {
        if (left[i] <= right[j])
            arr[k] = left[i], k++, i++;
        else
            arr[k] = right[j], k++, j++;
    }

    while (i < len1)
        arr[k] = left[i], k++, i++;

    while (j < len2)
        arr[k] = right[j], k++, j++;
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;

        mergeSort(arr, l, mid);

        mergeSort(arr, mid + 1, r);

        merge(arr, l, r);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}