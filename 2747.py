num = int(input())

def fibo(num):
	if num == 0:
		return 0
	elif num == 1:
		return 1
	else:
		i, a1, a2 = 1, 1, 0
		while(num != i):
			i, a1, a2 = i+1, a1+a2, a1
		return a1

print(fibo(num))
