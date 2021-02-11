#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    int length = sizeof(arr) / sizeof(arr[0]);
    int tmp;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}
