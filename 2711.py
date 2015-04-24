count = int(input())
li = []
for i in range(count):
	index, text = input().split(" ")
	li.append([int(index),text])
for i in range(count):
	index = li[i][0]-1
	text = li[i][1]
	print(text[:index]+text[index+1:])
