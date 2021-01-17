def selection_sort(arr):
	for num in range(0, len(arr)):
		min_position = num
		for i in range(num, len(arr)):
			if arr[i] < arr[min_position]:
				min_position = i

		temp = arr[num]
		arr[num] = arr[min_position]
		arr[min_position] = temp

arr = [6, 3, 8, 5, 2, 7, 4, 1]

print(f'Unordered: {arr}')

selection_sort(arr)

print(f'Ordered: {arr}')