import random
A=random.sample(range(-10,10),random.randint(0,10))
A.sort()
B=random.sample(range(-10,10),random.randint(0,10))
B.sort()
print(A)
print(B)
temp=0
#Algorithm 3: sort both arrays and iterate through both the lists
l=0
m=0
unionAB=[]
while l<len(A) and m<len(B):
    if A[l]<B[m]:
        l=l+1
    elif A[l]>B[m]:
        m=m+1
    else:
        temp=temp+1
        unionAB.append(A[l])
        l=l+1
        m=m+1
print(unionAB)
