#coidng: utf-8
result = 0
for i in range(5):
	num = int(input())
	if(num < 40):
		result += 40
	else:
		result += num

print(int(result/5))
