a=[]
b=int(input())
c=2
d=2
g=0
while c<=b :
    while d<c-1 :
        if c%d!=0 :
            pass
        elif c%d==0 :
            break
        d=d+1
    if c%d!=0 :
        a.append(c)
    c=c+1
    d=2
b=0 
f=0 
g=len(a)
while b<g-1 :
    if a[b+1]-a[b]==2 :
        f+=1
    b+=1
print(f)
