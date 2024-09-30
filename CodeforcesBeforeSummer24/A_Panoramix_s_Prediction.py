n, m = input().split()
n=int(n)
m=int(m)
x=0
while x==0 :
    n+=1
    y=0
    for i in range(2,n):
        if n%i==0:
            y+=1
    if y==0:
        x+=1
if n==m:
    print("YES")
else :
    print("NO")