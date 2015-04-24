s = input()
num1, num2 = s.split(" ")

new_num1 = ""
new_num2 = ""
for i in range(len(num1)):
	new_num1 = new_num1 + num1[len(num1)-1-i]
for i in range(len(num2)):
	new_num2 = new_num2 + num2[len(num2)-1-i]

print(max(int(new_num1),int(new_num2)))