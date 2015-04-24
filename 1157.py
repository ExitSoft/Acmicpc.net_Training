word = input()
li = {}
lis = []
for i in range(len(word)):
	li[word[i]] = word.count(word[i])

for i in range(len(li)):
	lis.append(li[word[i]][0])
print(lis)
