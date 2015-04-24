s = input()
num1, num2 = s.split(" ")
num1 = int(num1)
num2 = int(num2)
s = input()
li = s.split(" ")
li.sort()
li_result = ""
for i in range(len(li)):
	li_result = li_result + li[i]
for i in range(num2-3):
	for j in range(num1):
		result = li_result[i:i+3]
		result = result + li[j]
		print(result)

