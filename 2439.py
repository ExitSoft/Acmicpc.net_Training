#coding: utf-8

loop = int(input())
index = loop

for i in range(loop):
	index -= 1
	for j in range(loop):
		if(j >= index):
			print("*", end = "")
		else:
			print(" ", end = "")

	print("")