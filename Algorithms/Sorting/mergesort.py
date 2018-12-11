import math
def mergesort(A,n):
    k=math.ceil(float(n/2));
    B=[A[x] for x in range(k)]
    C=[A[x] for x in range(k,n)]
    if k!=1:
        mergesort(B,k)
    if (n-k)!=1:
        mergesort(C,n-k)
    i=0
    j=0
    l=0
    for x in range(min(k,n-k)):
        if B[i]<C[j]:   #changing sign here changes everything
            A[l]=B[i]
            i+=1
        else:
            A[l]=C[j]
            j+=1
        l+=1
    while i<k:
        A[l]=B[i]
        l+=1
        i+=1
    while j<n-k:
        A[l]=C[j]
        j+=1
        l+=1
    return A
import random

A=random.sample(range(1000000000000000),random.randint(1,100000))
print(A)
for x in A:
    mergesort(A,len(A))
print(A)
