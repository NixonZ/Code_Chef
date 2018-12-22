import random
A=random.sample(range(-10,10),random.randint(0,10))
print(A)
tempsum=0
best=0
for x in A:
    tempsum=max(tempsum+x,x)
    best=max(tempsum,best)
print("Max sum="+str(best))
