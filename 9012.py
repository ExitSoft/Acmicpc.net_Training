count = int(input())
arr = []
for i in range(count):
	arr.append(input())

for i in range(count):
	stack = []	
	for j in range(len(arr[i])):
		if(arr[i][0] == ")"):
			stack.append(")")
			break

		if(arr[i][j] == "("):
			stack.append(arr[i][j])
		else:
			# stack.remove(")")
			if(stack != []):
				stack.pop()
			else:
				stack.append(")")
				break


	if(stack == []):
		print("Yes")
	else:
		print("No")