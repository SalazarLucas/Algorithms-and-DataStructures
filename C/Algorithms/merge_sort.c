#include <stdio.h>

int merge_sort(int arr[], int length);

int main(void)
{
	int arr[] = {7, 4, 5, 2, 6, 3, 8, 1};
	int length = sizeof(arr) / sizeof(arr[0]);
	
	merge_sort(arr, length);
	
	for (int i = 0; i < length; i++)
	{
		printf("%i ", arr[i]);
	}
	printf("\n");
}

int merge_sort(int arr[], int length)
{
	if (length > 1)
	{
		// Recursively split up the array into sub-arrays
		int middle_index = length / 2;
		int l = middle_index;
		int r = length - middle_index;
		int left_half[l], right_half[r];
		
		for (int i = 0; i < l; i++)
		{
			left_half[i] = arr[i];
		}
		
		for (int j = 0; j < r; j++)
		{
			right_half[j] = arr[middle_index + j];
		}
		
		merge_sort(left_half, l);
		merge_sort(right_half, r);
		
		int i, j, k;
		i = 0;
		j = 0;
		k = 0;
		
		// Sort and merge halves
		while (i < l && j < r)
		{
			if (left_half[i] < right_half[j])
			{
				arr[k] = left_half[i];
				i += 1;
			}
			else
			{
				arr[k] = right_half[j];
				j += 1;
			}
			k += 1;
		}
		
		// Copy the remaining elements of left_half if there are any
		while (i < l)
		{
			arr[k] = left_half[i];
			i += 1;
			k += 1;
		}
		
		// Copy the remaining elements of right_half if there are any
		while (j < r)
		{
			arr[k] = right_half[j];
			j += 1;
			k += 1;
		}
	}
	return 0;
}
