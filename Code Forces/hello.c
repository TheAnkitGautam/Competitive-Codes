#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    srand(time(0));

    for (int i = 0; i < n; i++)
        arr[i] = rand();

    clock_t begin = clock();
    bubbleSort(arr, n);
    clock_t end = clock();

    double time_taken = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Total execution time is %lf seconds", time_taken);

    return 0;
}