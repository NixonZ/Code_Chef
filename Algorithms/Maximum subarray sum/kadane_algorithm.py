A=[]
print("Enter array(exit to end)")
while 1:
    x=input()
    if x=='exit':
        break
    A.append(int(x))
best=0
tempsum=0
for x in A:
    tempsum=max(tempsum+x,x)
    best=max(best,tempsum)
print("Max sum="+str(best))
#complexity is O(n)
