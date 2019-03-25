def SieveOfEratosthenes(n):

  
    prime = [True for i in range(n+1)]
    p = 2
    while (p * p <= n):

        if (prime[p] == True):

            # Update all multiples of p
            for i in range(p * p, n+1, p):
                prime[i] = False
        p +=1
    a=[]
    for p in range(2, n):
        if prime[p]:
            a.append(p)
    z=2+3+5+7
    x=[]
    mos=0
    for m in a:
        h=str(m)
        length=len(h)
        co=0
        lk=list(h)
        lk.reverse()
        sd=''.join(lk)
        asd=-2
        for v in range(0,length):
            if int(h[v::]) in a and int(sd[-1:asd:-1]) in a:
                co=co+1
            else:
                break
            if co==length:
                x.append(int(h))
                mos+=1
                print(h)
            asd=asd-1
        if mos==15:
            print("hello",sum(x)-z)
            break
SieveOfEratosthenes(8000000)
                    
                
                
        

