s = input()
li = s.split(" ")
sum_li = 0
for i in li:
	sum_li += int(i)**2

print(sum_li % 10)
