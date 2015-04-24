count = int(input())
s = 'A'
s1 = ''
for j in range(count):
	for i in range(len(s)):
		if s[i] == 'A':
			s1 += 'B'
		elif s[i] == 'B':
			s1 += 'BA'
	s = s1
	s1 =''
print(s.count('A'),s.count('B'))