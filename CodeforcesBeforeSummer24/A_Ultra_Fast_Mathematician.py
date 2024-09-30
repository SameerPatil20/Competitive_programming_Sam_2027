a=input()
b=input()
n=len(a)
c=""
for i in range (0,n):
    if a[i]!=b[+i]:
        c+='1'
    else:
        c+='0'
print(c)
