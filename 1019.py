num = int(input())
li = []
li2 = ['0','1','2','3','4','5','6','7','8','9']
result = [0,0,0,0,0,0,0,0,0,0]
for i in range(num):
	li.append(str(i+1))

	for char in li[i]:
		for j in range(10):
			if (char == li2[j]):
				result[j] = result[j] + 1


for i in range(10):
	print(result[i], end = " ")
print()

