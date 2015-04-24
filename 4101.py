while (True):
	t =input()
	a, b = t.split(" ")
	if(int(a) == 0 and int(b) == 0):
		break
	if(int(a)>int(b)):
		print("Yes")
	else:
		print("No")
