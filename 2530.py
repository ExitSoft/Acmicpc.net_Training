hour, minute, sec = input().split(" ")
hour = int(hour)
minute = int(minute)
sec = int(sec)

add = int(input())

sec += add

if sec + add >= 60:
	minute += int(sec/60)

if minute >= 60:
	hour += int(minute/60)

print(hour%24,minute%60,sec%60)