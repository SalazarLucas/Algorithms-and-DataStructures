

def bubble_sort(arr):
	for num in range(len(arr) - 1, 0, -1):
		for i in range(num):
			if arr[i] > arr[i + 1]:
				temp = arr[i]
				arr[i] = arr[i + 1]
				arr[i + 1] = temp


arr = [54, 26, 93, 17, 77, 31, 44, 55, 20]

print(f'Unordered list: {arr}')

bubble_sort(arr)

print(f'Ordered list: {arr}')
