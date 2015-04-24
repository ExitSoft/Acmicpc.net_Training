cash = int(input())
li = []
for i in range(9):
	li.append(int(input()))
print(cash - sum(li))