w=0
for i in range(2,1000000):
   # print(i)
    ws=i
    k=0
    while(ws>0):
        s=ws%10
        k=s**5+k
        ws=ws//10
    if i==k:
        print(k)
        w=w+i
print(w)
        
        
