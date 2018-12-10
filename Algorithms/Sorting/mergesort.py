import math
def mergesort(A,n):
    k=math.ceil(float(n/2));
    B=[A[x] for x in range(k)]
    C=[A[x] for x in range(k,n)]
    if k==2:
        if B[0]>B[1]:
            temp=B[1]
            B[1]=B[0]
            B[0]=temp
    if n-k==2:
        if C[0]>C[1]:
            temp=C[0]
            C[0]=C[1]
            C[1]=temp
    if B[k-1]>C[0]:
        temp=C[0]
        C[0]=B[k-1]
        B[k-1]=temp
    if k!=1:
        mergesort(B,k)
    if (n-k)!=1:
        mergesort(C,n-k)
    for x in range(k):
        A[x]=B[x]
    for x in range(k,n):
        A[x]=C[x-k]
    return A
import random

A=random.sample(range(100),random.randint(1,10))
print(A)
for x in A:
    mergesort(A,len(A))
print(A)
