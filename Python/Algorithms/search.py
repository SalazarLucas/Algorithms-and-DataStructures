import time
from random import randint


class Search:
	def __init__(self, value):
		self.value = value
	
	def linear(self, iterable):
		start = time.process_time()
		
		found = False
		steps = 0
		
		for i in range(len(iterable)):
			
			if iterable[i] == self.value:
				found = True
				break
			
			steps += 1
		
		end = time.process_time()
		return {'found': found, 'time': end - start, 'steps': steps}
	
	def binary(self, iterable):
		start = time.process_time()
		
		first = 0
		last = len(iterable) - 1
		found = False
		steps = 0
		
		while first <= last and not found:
			midpoint = (first + last) // 2
			
			# Look in the middle
			if iterable[midpoint] == self.value:
				found = True
				steps += 1
			
			# Look at left half
			elif self.value < iterable[midpoint]:
				last = midpoint - 1
				steps += 1
			
			# Look at right half
			elif iterable[midpoint] < self.value:
				first = midpoint + 1
				steps += 1
		
		end = time.process_time()
		return {'found': found, 'time': end - start, 'steps': steps}


iterable = [n for n in range(10000000)]
value = randint(0, 10000000)

s = Search(value)
linear_search = s.linear(iterable)
binary_search = s.binary(iterable)

print(f'Value: {value}')

print(f'''Linear Search -------------------------------------------------------->
Found? {linear_search['found']}
Time: {linear_search['time']} seconds
Steps: {linear_search['steps']}''')

print(f'''Binary Search -------------------------------------------------------->
Found? {binary_search['found']}
Time: {binary_search['time']} seconds
Steps: {binary_search['steps']}''')
