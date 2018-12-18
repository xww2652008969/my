def sum (a) :
    if a==0 :
       print(" ling")
    elif a==1 :
        print(" yi")
    elif a==2 :
        print(" er")
    elif a==3 :
         print(" san")
    elif a==4 :
        print(" si")        
    elif a==5 :
         print(" wu")
    elif a==6 :
         print(" liu")
    elif a==7 :
         print(" qi")        
    elif a==8 :
        print(" ba")
    elif a==9 :
         print(" jiu")
b=int(input())
c=0
while b>0 :
    c=c+b%10
    b=int(int(b)/10)
    print(c)
d=[]
i=0
while c>=1 :
    d.append(int(c%10))
    c=int(c/10)
    i=i+1
print(d)
while i>=1 :
    a=d[i-1]
    sum(a)
    i=i-1
