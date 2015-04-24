s = input()
num1, num2 = s.split(" ")
gcd = []
num1 = int(num1)
num2 = int(num2)
for i in range(1,min(num1,num2)+1):
	if (num1 % i == 0 and num2 % i == 0):
		gcd.append(i)
gcd_num = max(gcd)
print(gcd_num)
print(int(num1*num2/gcd_num))