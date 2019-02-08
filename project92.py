checkq1=[44,32,13,10,1,100,1000,10000,100000]
checkq89=[85,89,145,42,20,4,16,37,58]
def check_i_is89(q):
    if q in checkq89:
        global total
        total=total+1
        return 0
    if q in checkq1:
        return 0
    k=q
    w=0
    while k>0:
        s=k%10
        w=pow(s,2)+w
        k=k//10
    check_i_is89(w)
total=0
for i in range(2,10000000):
    check_i_is89(i)
print(total)
        
    
