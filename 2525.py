num1, num2 = input().split(" ")
num1 = int(num1)
num2 = int(num2)
add = int(input())

if (num2 + add) >= 60:
	num1 += int((num2 + add) / 60)
	num2 = (num2 + add) % 60
else:
	num2 += add

if num1 >= 24:
	num1 = num1 % 24

print(num1, num2)



