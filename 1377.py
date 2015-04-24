count = int(input())
li = []
for i in range(count):
	li.append(int(input()))

for i in range(count):
	sw = 0
	for j in range(count-i-1):
		if li[j] > li[j+1]:
			li[j], li[j+1] = li[j+1], li[j]
			sw = 1
	if sw == 0:
		print(i+1)
		break

