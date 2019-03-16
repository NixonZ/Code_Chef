import random
def partition(A,x,left,right):
    i,j=left,right
    #assert A[left.....i]<x and A[j.......right]>=x   left<=i<p p<=j<=right
    while(i<=j):
        if(A[i]<=x):
            i+=1
        else:
            A[i],A[j]=A[j],A[i]
            j-=1
    p=j
    #assert A[left.....p-1]<x and A[p+1.......right]>=x
    return p

def qsort1(A,left,right):
    if(left<right):
        p=partition(A,A[left],left+1,right)
        #assert A[left.....p-1]<A[left] and A[p+1.......right]>=A[left]
        A[p],A[left]=A[left],A[p]
        qsort(A,left,p-1)
        qsort(A,p+1,right)
        #assert= A[left.....right] is sorted
        return A
def qsort(A):
    A=qsort1(A,0,len(A))
    #assert= A[0.....n] is sorted
    return A
A=random.sample(range(10),random.randint(1,10))
print(A)
print(qsort(A))
