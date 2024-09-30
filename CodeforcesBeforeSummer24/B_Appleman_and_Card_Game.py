n,k=input().split()
n=int(n)
k=int(k)
u=input()
dict={}
for i in range(ord('A'),ord('Z')+1):
    dict[chr(i)]=0
for j in range(0,len(u)):
    dict[u[j]]+=1
ans=[]
for i in range(ord('A'),ord('Z')+1):
    ans.append(dict[chr(i)])
ans.sort(reverse=True)
sum=0
x=0
i=0
while x<k:
    sum+=min(ans[i],k-x)**2
    x+=min(ans[i],k-x)
    i+=1
print(sum)


