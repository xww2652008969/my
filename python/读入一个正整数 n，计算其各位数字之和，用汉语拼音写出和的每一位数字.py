def sum (a) :
    if a==0 :
       print("ling",end="")
    elif a==1 :
        print("yi",end="")
    elif a==2 :
        print("er",end="")
    elif a==3 :
         print("san",end="")
    elif a==4 :
        print("si",end="")        
    elif a==5 :
         print("wu",end="")
    elif a==6 :
         print("liu",end="")
    elif a==7 :
         print("qi",end="")        
    elif a==8 :
        print("ba",end="")
    elif a==9 :
         print("jiu",end="")

b=int(input())
c=0
while b>0 :
    c=c+b%10
    b=b//10
d=[]
i=0
while c>=1 :
    d.append(c%10)
    c=c//10
    i=i+1
while i>=1 :
    a=d[i-1]
    sum(a)
    if i!=1 :
        print(" ",end="")
    i=i-1
print()