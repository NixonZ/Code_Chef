x=int(input())
y=float(input())
if not(x%5) and (y-0.50)<x:
    print(y)
else:
    y=y-0.50-float(x)
    print(y)
