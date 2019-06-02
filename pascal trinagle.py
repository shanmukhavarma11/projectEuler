a=[]
k=1
for i in range(0,14):
    s=[]
    for j in range(0,i+1):
        if j==0 or j==i:
            s.append(k)
        else:
            try:
                s.append(a[i-1][j]+a[i-1][j-1])
            except:
                pass
    a.append(s)
for i in a:
    k=i
    for j in k:
        print(j,end=" ")
    print()
