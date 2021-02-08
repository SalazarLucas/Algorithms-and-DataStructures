#include <stdio.h>

int main(void)
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int first = 0;
    int last = sizeof(arr) / sizeof(arr[0]) - 1;
    int n;
    int found = 0;

    printf("n: ");
    scanf("%d", &n);

    while (first <= last)
    {
        int midpoint = (first + last) / 2;

        // Look in the middle
        if (arr[midpoint] == n)
        {
            printf("Found!\n");
            return 0;
        }

        // Look at left half
        else if (n < arr[midpoint])
        {
            last = midpoint - 1;
        }

        // Look at right half
        else if (arr[midpoint] < n)
        {
            first = midpoint + 1;
        }
    }
    printf("Not found!\n");
    return 1;
}
