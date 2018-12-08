#slowest algorithm of time complexity O(n^3)
A=[]
while 1:
    x=input("Enter array(exit to end)")
    if x=='exit':
        break
    A.append(int(x))
best=0
tempsum=0
for x in range(len(A)):
    for y in range(x,len(A)):
        tempsum=0
        for z in A[x:y]:
            tempsum+=z
        if best<tempsum:
            best=tempsum
print("Max sum="+str(best))
