from math import factorial
def function(n,k):
    s=factorial(n)/(factorial(k)*factorial(n-k))
    return s
a=[]
for i in range(1,101):
    for j in range(1,i+1):
        l=function(i,j)
        if l>=1000000:
            a.append(l)
print(len(a))
for i in a:
    print(i)
        
