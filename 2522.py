a = int(input())
for i in range(a):
	print(" "*(a-1-i)+"*"*(i+1))
for i in range(1,a):
	print(" "*i+"*"*(a-i))