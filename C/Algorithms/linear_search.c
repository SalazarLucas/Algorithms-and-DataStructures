#include <stdio.h>

int main(void)
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int length = sizeof(arr) / sizeof(arr[0]);
	int n;
	
	printf("n: ");
	scanf("%d", &n);
	
	for (int i = 0; i < length; i++)
	{
		if (n == arr[i])
		{
			printf("Found!\n");
			return 0;
		}
	}
	printf("Not found!\n");
	return 1;
}