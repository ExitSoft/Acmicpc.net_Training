num = int(input())
for i in range(2*num-1):
	if i < num:
		print(" "*i+"*"*(2*num-2*(i+1)+1))
	else:
		print(" "*(2*num-(i+2))+"*"*(2*((i+1)-num)+1))
