import random
c=int(input("Enter the upper bound of elements of random array:"))
A=random.sample(range(c),random.randint(0,c))
index=[0 for x in range(c)]
for x in A:
    index[x]+=1
i=0
for x in range(c):
    while index[x]>0:
        A[i]=x
        i+=1
        index[x]-=1
print(A)
