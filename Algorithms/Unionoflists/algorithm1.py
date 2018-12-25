import random
A=random.sample(range(-10,10),random.randint(0,10))
B=random.sample(range(-10,10),random.randint(0,10))
print(A)
print(B)
temp=0
#Algorithm 1: create a set for A and iterate elements of B through it O(nlogn)
s=set()
unionAB=[]
for x in A:
    s.add(x)
for x in B:
    if x in s:
        temp=temp+1
        unionAB.append(x)
print(unionAB)
