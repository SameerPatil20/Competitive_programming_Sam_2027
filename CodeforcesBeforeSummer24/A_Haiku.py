q=['a','e','i','o','u']
a=input()
count1=0
for i in range(0,len(a)):
    if a[i]in(q) :
        count1+=1
a=input()
count2=0
for i in range(0,len(a)):
    if a[i]in(q) :
        count2+=1
a=input()
count3=0
for i in range(0,len(a)):
    if a[i]in(q) :
        count3+=1
if count1==5 and count2==7 and count3==5:
    print("YES")
else:
    print("NO")