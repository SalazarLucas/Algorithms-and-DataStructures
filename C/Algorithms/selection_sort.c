#include <stdio.h>

int selection_sort(int arr[], int length);

int main(void)
{
    int arr[] = {6, 3, 8, 5, 2, 7, 4, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, length);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int selection_sort(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int min = i;
        for (int j = i; j < length; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    return 0;
}
