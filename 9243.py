count = int(input())
s = input()
answer = input()
if (count % 2 == 1):
	s = s.replace("1","3")
	s = s.replace("0","1")
	s = s.replace("3","0")

if (s == answer):
	print("Deletion succeeded")
else:
	print("Deletion failed")

