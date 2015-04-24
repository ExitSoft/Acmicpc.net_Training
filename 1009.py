count = int(input())
sli = [[1],[2, 4, 8, 6],[3, 9, 7, 1],[4, 6],[5],[6],[7, 9, 3 ,1],[8, 4, 2, 6],[9],[10]]
li = []
for i in range(count):
	s = input()
	num1, num2 = s.split(" ")
	li.append([int(int(num1)%10), int(num2)])
for i in range(count):
	print(sli[li[i][0] - 1][li[i][1] % len(sli[li[i][0]-1]) - 1])
