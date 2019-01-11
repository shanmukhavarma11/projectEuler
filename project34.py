k=3
n=10**5
add=0
while(k<n):
    w=0
    for i in str(k):
        sumoffactofw=1
        i=int(i)
        for l in range(1,i+1):
            sumoffactofw=l*sumoffactofw
        w=sumoffactofw+w
        if int(k) == w:
            add+=k
    k+=1
print(add)
    

    

        
