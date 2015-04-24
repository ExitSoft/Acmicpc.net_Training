li = []
for i in range(3):
	s = input()
	li.append(s.split(" "))

for i in li:
	if (i.count("0") == 1):
		print("A")
	elif (i.count("0") == 2):
		print("B")
	elif (i.count("0") == 3):
		print("C")
	elif (i.count("0") == 4):
		print("D")
	elif (i.count("1") == 4):
		print("E")
