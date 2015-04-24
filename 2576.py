def odd(num):
	return num % 2 == 1

odd_li = []

for i in range(7):
	num = int(input())
	if odd(num):
		odd_li.append(num)

if odd_li == []:
	print("-1")
else:
	print(sum(odd_li))
	print(min(odd_li))
