count = int(input())
arr = []
stack = []
for i in range(count):
	arr.append(input())

sw = False
for i in range(count):
	for j in range(len(arr[i])):
		if(arr[i][j] == '(' and sw == False):
			stack.append(arr[i][j])
			sw = True
		if(arr[i][j] == ')' and sw == True):
			stack.append(arr[i][j])
			sw = False

print(stack)
print(arr)




