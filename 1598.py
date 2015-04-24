text=input()
a, b = text.split(" ")
a = int(a)
b = int(b)
a_x = a % 4
a_y = (a//4)
if(a_x == 0):
	a_x = 4
else:
	a_y += 1
b_x = b % 4
b_y = (b // 4)
if(b_x == 0):
	b_x = 4
else:
	b_y += 1
print (abs(b_x - a_x)+abs(b_y - a_y))