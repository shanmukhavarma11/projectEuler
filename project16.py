exp=int(input("enter your expr"))
s=pow(2,exp)
print(s)
k=0
while(s>0):
    n=s%10
    k=k+n
    s=s//10
print("-------------------------ANSWER------------------------------")    
print(k)
