c = int(input())
li = []
for i in range(c):
	li.append(input().split(" "))
	for j in range(len(li[i])):
		li[i][j] = int(li[i][j])

for i in range(c):
	for j in range(1,min(li[i])+1):
		if(li[i][0] % j == 0 and li[i][1] % j == 0):
			gcd = j

	lcm = int((li[i][0] * li[i][1]) / gcd)

	print(lcm, gcd)