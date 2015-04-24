count = int(input())
li = []

for i in range(count):
	s_li = []
	s = input()
	s_li = s.split(" ")
	li.append(s_li)

even_li = []
for i in range(count):
	s_li2 = []
	for j in range(7):
		if int(li[i][j]) % 2 == 0:
			s_li2.append(int(li[i][j]))
	even_li.append(s_li2)

for i in range(count):
	print(sum(even_li[i]),min(even_li[i]))