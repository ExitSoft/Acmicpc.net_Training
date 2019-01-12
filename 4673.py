cache = [];

def d(n):
	result = n;
	while(n > 0):
		di = int(n % 10)
		result = result + di;
		n = int(n / 10);

	if(result > 10000):
		return
	if not (result in cache):
		cache.append(result);
	return d(result);


for i in range(1, 10000):
	d(i)
for i in range(10000):
	if not i in cache:
		print(i)