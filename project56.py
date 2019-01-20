l=[]
for i in range(2,100):
    for j in range(2,100):
        s=pow(i,j)
        su=0
        for k in str(s):
            su=su+int(k)
        l.append(su)
print(max(l))
