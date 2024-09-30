button,bulb=map(int,input().split())
lt=[i for i in range(1,bulb+1)]
for i in range(0,button):
    a=list(map(int,input().split()))
    for j in range(1,len(a)):
        if a[j]in(lt):
            lt.remove(a[j])
if len(lt)==0:
    print("YES")
else :
    print("NO")

