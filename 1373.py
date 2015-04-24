s = input()
li = []
if len(s) % 3 == 0:
	leng = int(len(s)/3)
else:
	leng = int(len(s)/3+1)

for i in range(leng):
	li = li + [s[-3:]]
	s = s[:-3]
li.reverse()
result = ""
print(li)

for i in li:
	result2 = 0
	for j in range(len(i)):
		result2 +=  int(i[j]) * ( 2 ** (len(i)-j-1))
	result = result + str(result2)
print(result)