#coding: utf-8

text = input()

text = text.split(" ")

a = int(text[0])
b = int(text[1])

result = a - b

if(result < 0):
	result = result * -1

print(result)
