import random
A=random.sample(range(10),random.randint(0,10))
x=random.randint(0,10)
A.sort()
print(A)
print("Let us search for "+ str(x))
b=len(A)
k=0
while b>1:
    b=int(b/2)
    while k+b<len(A) and A[k+b]<=x:
        k+=b
if A[k]==x:
    print("Element found")
else:
    print("Element not found")
