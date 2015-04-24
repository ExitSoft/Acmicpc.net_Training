#coding: utf-8

num_list = []
for i in range(9):
	num = int(input())
	num_list.append(num)

sort_list = sorted(num_list)
print(sort_list[8])
for i in range(9):
	if num_list[i] == sort_list[8]:
		print(i+1)
