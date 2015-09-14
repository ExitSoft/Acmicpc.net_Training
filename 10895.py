def func(a, b, t):

	if(b == 1) :
		return pow(a,t)
	return func(a, b-1, pow(a,t));


a = int(input())
b = int(input())


print(func(a,b,a)%(a+1))