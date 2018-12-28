import random
#Method-1: Using recurssion
n=random.randint(0,5)
print(n)
chosen=[]
for i in range(0,n):
    chosen.append(0)
permutation=[]
def search():
    if(len(permutation)==n):
        print(permutation)
    else=[] 
        for i in range(0,n):
            if(chosen[i]):
                continue
            chosen[i]=1
            permutation.append(i)
            search()
            chosen[i]=0
            permutation.pop()
search()
