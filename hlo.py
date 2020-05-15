t=int(input())
for x in range(1,t+1):
	n=int(input())
	f=2
	if n==1:
		print("1","1 1",sep="\n")
		continue;
	print(n//2)
	for i in range(1,n,2):
		if i==n-2:
			f=3
		if i==n-2:
			print(f,i,i+1,n,sep=" ")
		else:
			print(f,i,i+1,sep=" ")
