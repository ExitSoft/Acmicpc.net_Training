s = input().split(" ")
for i in range(3):
	s[i] = int(s[i])


if (s.count(s[0]) == 1 and s.count(s[1]) == 1 and s.count(s[2]) == 1):
	print(max(s) * 100)
elif (s.count(s[0]) == 3):
	print(s[0] * 1000  + 10000)
else:
	if (s.count(s[0]) == 2):
		print(1000 + s[0]*100)
	elif (s.count(s[1]) == 2):
		print(1000 + s[1]*100)
	else:
		print(1000 + s[3]*100)
