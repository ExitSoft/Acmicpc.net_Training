a = int(input())
b = []
for i in range(a):
	b.append(int(input()))
c = int(input())
d = []
for i in range(c):
	d.append(int(input()))

for i in d:
	if(b.find(i) != -1):
		print("0")
	else:
		print("1")



