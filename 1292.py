t = input()
a, b = t.split(" ")
li = []
a = int(a)
b = int(b)
result = 0
for i in range(1,b+1):
	for j in range(i):
		li.append(i)
for i in range(a-1,b):
	result += li[i]
print(result)

