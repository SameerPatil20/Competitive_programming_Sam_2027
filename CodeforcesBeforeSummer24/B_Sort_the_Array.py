n=int(input())
b=input()
b=b.split()
for i in range(0,n):
    b[i]=int(b[i])
c=[]
for i in range(0,n):
    c.append(b[i])
c.sort()
start=0
end=n-1
while start<n and b[start]==c[start]:
    start+=1
while end>=0 and b[end]==c[end]:
    end-=1
d=[]
e=[]
if end==-1:
    print("yes")
    print("1 1")
else:
    for i in range(start,end+1):
        d.append(b[i])
    for i in range(start,end+1):
        e.append(c[end+start-i])
    m=len(e)
    #print(d)
    #print(e)
    if d==e:
        print("yes")
        print(start+1,end+1,sep=" ")
    else :
        print("no")




