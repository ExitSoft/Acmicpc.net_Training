case = int(input())

fiboCount = [[1,0],[0,1]]

def fibo(n):
  count = [0,0]
  if (n==0):
    count[0]+=1;
    return count
  elif (n==1):
    count[1]+=1;
    return count
  return [fiboCount[n-1][0] + fiboCount[n-2][0], fiboCount[n-1][1] + fiboCount[n-2][1]]


for i in range(41):
    if(i > 1):
      fiboCount.append(fibo(i))

while(case):
  n = int(input())
  print(fiboCount[n][0], fiboCount[n][1])
  case-=1
  
exit()
