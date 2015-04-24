li = []
for i in range(10):
	li.append(int(input()))
result = 0
for i in range(len(li)):
	if (abs(100 - result) >= li[i]):
		result += li[i]
	else:
		if(abs(100 - result) == (abs(100 - (result + li[i])))):
			result += li[i]
		break
print(result)