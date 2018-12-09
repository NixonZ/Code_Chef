A=[]
while 1:
    x=input("Enter array(exit to end)")
    if x=='exit':
        break
    A.append(int(x))
best=0
tempsum=0
for x in range(len(A)):
    tempsum=0
    for y in A[x:]:
        tempsum+=y
        if best<tempsum:
            best=tempsum
print("Max sum="+str(best))
#complexity is O(n^2)
