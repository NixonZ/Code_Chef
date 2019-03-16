import random
def merge(B,C):
    n1=len(B)
    n2=len(C)
    A=[0 for x in range(n1+n2)]
    #assert: B and C are sorted
    i,j,k=0,0,0
    #INV:A[k]=min{B[i],C[j]} is sorted k=i+j,0<=i<=n1 0<=j<=n2
    while((i<n1) and (j<n2)):
        if (B[i]>C[j]):
            A[k]=C[j]
            j+=1
        else:
            A[k]=B[i]
            i+=1
        k+=1
    while(i<n1):
        A[k]=B[i]
        i+=1
        k+=1
    while(j<n2):
        A[k]=C[j]
        j+=1
        k+=1
    #assert: A is sorted
    return A
def mergeSort(A):
    #assert: if len(A)=1 then array is sorted
    if len(A)==1:
        return A
    B=[]
    C=[]
    for i in range(len(A)):
        if (i%2):
            B.append(A[i])
        else:
            C.append(A[i])
    A=merge(mergeSort(B),mergeSort(C))
    return A
A=random.sample(range(10),random.randint(1,10))
print(str(len(A))+' '+str(len(A)//2+1))
print(A)
print(mergeSort(A))
