a=int(input())
b=0
c=[]
d=int(input())
while b<a :
    c.append(int(input()))
    b+=1
c1=c[(-d):]
c2=c[0:(a-d)]
c3=c1+c2
b=0
while b<a-1 :
    print("%d "%(c3[b]),end="")
    b+=1
print(c3[a-1],end="")
print()