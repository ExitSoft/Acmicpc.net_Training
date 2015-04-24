num1, num2, num3 = map(int,input().split(" "))
li = [num1, num2, num3]
li.sort()
s = input()
li2 = []
for i in range(len(s)):
	if s[i] == 'A':
		li2 += [0]
	elif s[i] == 'B':
		li2 += [1]
	elif s[i] == 'C':
		li2 += [2]

for i in range(len(li2)):
	print(li[li2[i]], end = " ")
print()