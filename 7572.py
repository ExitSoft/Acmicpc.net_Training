li = ['A','B','C','D','E','F','G','H','I','J','K','L']
year = int(input())

print(li[abs(year - 4)%12] + str(abs(year - 4)%10))