import math

t = int(input())
while(t>0): 
    x,k = input().split(' ')
    x = int(x)
    k = int(k)
    n = x
    l = []
    while (n % 2 == 0): 
        l.append(2) 
        n = n // 2
    for i in range(3,int(math.sqrt(n))+1,2): 
        while (n % i== 0): 
            l.append(i) 
            n = n // i 
    if n > 2: 
        l.append(n)
    
    if(len(l)>=k):
        print("1")
    else:
        print("0")
    t-=1 
