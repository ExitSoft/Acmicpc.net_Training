num1 = int(input())
num2 = input()

li = []
for i in range(len(num2)):
	result = num1 * int(num2[len(num2)-1-i])
	li.append(result)

for i in range(len(li)):
	print(li[i])
print(num1*int(num2))