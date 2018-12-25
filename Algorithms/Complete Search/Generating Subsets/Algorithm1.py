#Method 1- Recursive Search returns all subsets of {0,1,...n-1}
import random
n=random.randint(0,5)
print(n)
subset=[]
def search(k):
    if k==n:
        print(subset)
    else:
        search(k+1)
        subset.append(k)
        search(k+1)
        subset.pop()
search(0)
