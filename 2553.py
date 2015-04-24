num = int(input())
result = 1
for i in range(1,num+1):
	result = result * i
str_num = str(result)
num_len = len(str_num)
for i in range(num_len):
	if not (str_num[num_len-1-i] == "0"):
		print(str_num[num_len-1-i])
		break
