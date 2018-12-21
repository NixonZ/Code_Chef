import random
k=random.randint(0,999)
print("program selected k as "+str(k))
def f(x):
    return (-1)*((x-k)**2)+3
b=999
x=-1
while b>1:
    b=int(b/2)
    while(f(x+b)<f(x+b+1)):
        x=x+b
print("Maximum at "+ str(x+1))
