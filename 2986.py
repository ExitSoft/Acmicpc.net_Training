
num = int(input())
# if (num % 10 == 0) or (num % 2 == 0) :
# 	print(int(num/2))
# elif num % 3 == 0:
# 	print(int(num/3))
# elif num % 7 == 0:
# 	print(int(num)/7)
# else:
# for i in reversed(range(1,num)) :
# 	if num % i == 0:
# 		print(i)
# 		break
def issprp(n, a):
    if n < 2 or n & 1 == 0: return False
    d = n - 1
    while d & 1 == 0:
        d >>= 1
        if pow(a, d, n) + 1 == n: return True
    return pow(a, d, n) == 1

def isprime(n):
    if n < 2: return False
    elif n < 4: return True
    elif not issprp(n, 2): return False
    elif n < 2047: return True
    elif not issprp(n, 3): return False
    elif n < 1373653: return True
    elif not issprp(n, 5): return False
    elif n < 25326001: return True
    elif n == 3215031751 or not issprp(n, 7): return False
    elif n < 118670087467: return True
    elif not issprp(n, 11): return False
    elif n < 2152302898747: return True
    elif not issprp(n, 13): return False
    elif n < 3474749660383: return True
    elif not issprp(n, 17): return False
    elif n < 341550071728321: return True
    else: raise ValueError

sw = False
count = 0
if isprime(num):
	print(num-1)
else:
	for i in range(2,num) :
		# count += 1
		if num % i == 0:
			print(int(num- (num/i) ) )
			sw =True
			break
# print(count)
# if not sw:
# 	print(1)
