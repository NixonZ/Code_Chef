#Method 2- Using bit representation of numbers between 0 and 2^n-1 to tell which elements to include from {0,1,....n-1}
import random
n=random.randint(0,5)
print(n)
subset=[]
for i in range(0,(1<<n)):
    subset=[]
    for j in range(0,n):
        if i&(1<<j):  #check if jth bit is subset
             subset.append(j)
    print(subset)
