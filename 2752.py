li = []
s = input()
num1, num2, num3 = s.split(" ")
num1 = int(num1)
num2 = int(num2)
num3 = int(num3)

li.append(num1)
li.append(num2)
li.append(num3)

li = sorted(li)
for i in li:
	print(i,end=" ")
print()

