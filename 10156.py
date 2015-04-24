s = input()
li = s.split(" ")
for i in range(len(li)):
	li[i] = int(li[i])
result = li[0]*li[1]-li[2]
if(result <= 0):
	print("0")
else:
	print(result)
