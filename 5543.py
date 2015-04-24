buger = []
for i in range(3):
	buger.append(int(input()))
drink = []
for i in range(2):
	drink.append(int(input()))
print(min(buger)+min(drink)-50)