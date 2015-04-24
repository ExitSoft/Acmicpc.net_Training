num = int(input())
for i in range(2*num-1):
	if i < num:
		print("*"*(i+1),end="")
		print(" "*((num-(i+1))*2),end="")
		print("*"*(i+1))
	else:
		print("*"*((2*num-(i+1))),end="")
		print(" "*((i+1)-num)*2,end="")
		print("*"*((2*num-(i+1))))
