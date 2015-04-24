a = int(input())
count = 0
while(True):
	count +=1
	if(a == 3 or a == 2 or a == 1):
		print(count)
		break
	else:
		if(a%3 == 1):
			a -= 1
		elif(a%3 == 0):
			a /= 3
		elif(a%2 == 0):
			a /= 2
		else:
			a -= 1