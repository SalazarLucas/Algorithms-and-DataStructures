

def merge_sort(arr):
	if len(arr) > 1:
		# Recursively split up the list
		middle_index = len(arr) // 2
		left_half = [n for n in arr[:middle_index]]
		right_half = [n for n in arr[middle_index:]]
		
		merge_sort(left_half)
		merge_sort(right_half)
		
		i, j, k = 0, 0, 0
		
		# Sort and merge halves
		while i < len(left_half) and j < len(right_half):
			if left_half[i] < right_half[j]:
				arr[k] = left_half[i]
				i += 1
			
			else:
				arr[k] = right_half[j]
				j += 1
			
			k += 1
		
		while i < len(left_half):
			arr[k] = left_half[i]
			i += 1
			k += 1
		
		while j < len(right_half):
			arr[k] = right_half[j]
			j += 1
			k += 1


arr = [7, 4, 5, 2, 6, 3, 8, 1]
merge_sort(arr)

print(arr)