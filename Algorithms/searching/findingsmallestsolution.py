import random
k=random.randint(0,99999)
print("program selected k as "+str(k))
def ok(x):
    if x>=k:
        return 1
    else:
        return 0
b=99999
x=-1
while b>1:
    b=int(b/2)
    while not(ok(x+b)):
        x=x+b
print("I found k as "+str(x+1))
