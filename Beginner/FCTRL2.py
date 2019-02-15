def mul(cur_num,x):
    cur_num=cur_num[::-1]
    carry=0
    for i in range(0,len(cur_num)):
        temp=cur_num[i]*x+carry
        cur_num[i]=temp%10
        carry=temp//10
        if i+1==len(cur_num) and carry!=0:
            cur_num.append(carry)
    return cur_num[::-1]

def fact(n):
    cur_num=[1]
    for i in range(1,n+1):
        cur_num=mul(cur_num,i)
    x=0
    for j in range(0,len(cur_num)):
        x+=cur_num[j]*(10**(len(cur_num)-j-1))
    return x
T=int(input())
A=[]
for i in range(T):
    temp=int(input())
    A.append(temp)
for x in A:
    print(fact(x))
