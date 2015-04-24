text = input()
text = text.split(" ")
a, b, c = text
a = int(a)
b = int(b)
c = int(c)
if(a + b == c):
	print(str(a)+"+"+str(b)+"="+str(c))
elif(a - b == c):
	print(str(a)+"-"+str(b)+"="+str(c))
elif(a * b == c):
	print(str(a)+"*"+str(b)+"="+str(c))
elif(a / b == c):
	print(str(a)+"/"+str(b)+"="+str(c))
elif(a == b + c):
	print(str(a)+"="+str(b)+"+"+str(c))
elif(a == b - c):
	print(str(a)+"="+str(b)+"-"+str(c))
elif(a == b * c):
	print(str(a)+"="+str(b)+"*"+str(c))
elif(a == b / c):
	print(str(a)+"="+str(b)+"/"+str(c))


