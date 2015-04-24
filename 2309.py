li = []
for i in range(9):
	li.append(int(input()))
li.sort()
li3 = []
# print(li)
for i in range(len(li)):
	# li2 = []	
	for j in range(len(li)-i-1):
		li3.append([li[i],li[i+j+1]])
	# li3.append(li2)
# li3.remove([])
# print(li3)
for i in range(len(li3)):
	if (sum(li) - sum(li3[i])) == 100:
		li.remove(li3[i][0])
		li.remove(li3[i][1])
		break

for i in li:
	print(i)
# print(li3)