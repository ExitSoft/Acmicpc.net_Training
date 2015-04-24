count = int(input())
arr = []
for i in range(count):
	arr.append(input())

for i in range(count-1):
	for j in range(count-1):
		if(len(arr[j]) > len(arr[j+1])):
			arr[j], arr[j+1] = arr[j+1], arr[j]

		if(len(arr[j]) == len(arr[j+1])):
			arr[j:j+2] = sorted(arr[j:j+2])

for i in range(len(arr)):
	if(i != 0):
		if not (arr[i] == arr[i-1]):
			print(arr[i])
	else:
		print(arr[i])
