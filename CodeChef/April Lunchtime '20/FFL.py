t = int(input())
while(t>0):
    n,s = input().split(' ')
    n = int(n)
    s = int(s)
    p = []
    s2 = input().split(' ')
    for i in range (n):
        p.append(int(s2[i]))
    defender = []
    forward = []
    s2 = input().split(' ')
    for i in range (n):
        x = int(s2[i])
        if(x):
            forward.append(p[i])
        else:
            defender.append(p[i])
    
    rem = 100-s
    f = 0
    for i in range (len(forward)):
        x = rem-forward[i]
        #print(x,i)
        for j in range (len(defender)):
            if(defender[j]<=x):
                f = 1
                break
        if(f == 1):
            break
    
    if(f):
        print("yes")
    else:
        print("no")
    
    t-=1
