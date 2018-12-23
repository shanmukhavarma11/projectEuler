a=[]
for i in range(2,101):
    for j in range(2,101):
        s=pow(i,j)
        a.append(s)
a=list(set(a))
a.sort()
b=len(a)
print(b)
        
