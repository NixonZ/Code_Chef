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

T=int(input())
A=[]
for i in range(T):
    temp=int(input)
    A.append(temp)
A=mergesort(A,len(A))
for x in A:
    print(A)
