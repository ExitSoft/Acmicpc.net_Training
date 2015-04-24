text=input()
a, b = text.split(" ")
result = 0
for i in range(int(a), int(b)+1):
	result += i
print(result)
