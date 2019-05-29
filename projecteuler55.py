a=[]
for i in range(10001):
    s=i
    for j in range(50):
        ww=j
        s=s
        k=int(str(s)[::-1])
        add=str(s+k)
        reverse=add[::-1]
        if add==reverse:
            break
        s=int(add)
        if j+1==50:
            a.append(i)

print(len(a))
            
        
        
        
        
