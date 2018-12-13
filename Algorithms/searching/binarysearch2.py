import random
A=random.sample(range(10),random.randint(0,10))
x=random.randint(0,10)
A.sort()
print(A)
print("Let us search for "+ str(x))
i=len(A)
k=0
while i>1:
    i=int(i/2)
    while k+i<len(A) and A[k+i]<=x:
        k+=i
if A[k]==x:
    print("Element found")
else:
    print("Element not found")
