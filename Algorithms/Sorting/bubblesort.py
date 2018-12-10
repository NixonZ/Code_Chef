import random
A=random.sample(range(100),random.randint(1,10))
check=1
for x in A:
    check=1
    for y in range(len(A)-1):
        if A[y]>A[y+1]:
            temp=A[y]
            A[y]=A[y+1]
            A[y+1]=temp
            check=0
    if check:
        break
print(A)
