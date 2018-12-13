import random
A=random.sample(range(10),random.randint(0,10))
x=random.randint(0,10)
A.sort()
print(A)
print("Let us search for "+ str(x))
temp=0
a=0
b=len(A)
for i in range(len(A)):
    k=(a+b)/2
    if x<A[i]:
        b=k
    elif x>A[i]:
        a=k
    else:
        temp=1
        break
if temp:
    print("Element found")
else:
    print("Element not found")
