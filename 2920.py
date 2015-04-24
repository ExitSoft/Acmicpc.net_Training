asending = ["1","2","3","4","5","6","7","8"]
descending = ['8','7','6','5','4','3','2',"1"]
s = input()
li = s.split(" ")
if li == asending:
	print("ascending")
elif li == descending:
	print("descending")
else:
	print("mixed")