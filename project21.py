k=[]
l1=[]
l3=[]

def calcula(a):
    s=a
    for q in range(1,a):
        if a%q == 0:
            k.append(q)
    l=sum(k)
    k.clear()
    for j in range(1,l):
        if l%j == 0:
            k.append(j)
    w=sum(k)
    k.clear()
    l3.append(l)
    l3.append(w)
    if a in l3:
        l3.clear()
        if l!=w:
            l1.append(l)
    l3.clear()
for i in range(1,10000):
    calcula(i)
print(sum(l1),l1)

        
                
                
                    
