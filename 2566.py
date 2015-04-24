board = []
max_b = []
for i in range(9):
	text = input()
	board.append(text.split(" "))
	for j in range(len(board[i])):
		board[i][j] = int(board[i][j])
	max_b.append(max(board[i]))


a = max(max_b)
print(a)
for i in range(len(board)):
	for j in range(len(board)):
		if(board[i][j] == a):
			print(str(i+1)+" "+str(j+1))
			exit()



