a=[]
for i in range(1,10**3):
    for j in range(1,10**3):
        s=pow(i,j)
        s=str(s)
        k=len(s)
        if k == j:
            a.append(int(s))
        if k > j:
            break
print(len(a))
        
        
