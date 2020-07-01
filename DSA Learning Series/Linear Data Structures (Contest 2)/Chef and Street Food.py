t = int(input())
while(t>0): 
    n = int(input())
    s = []
    p = []
    v = []
    for i in range (n):
        ss = input().split(' ') 
        s.append(int(ss[0]))
        p.append(int(ss[1]))
        v.append(int(ss[2]))
    
    prof = []
    for i in range (n):
        people = p[i]//(s[i]+1)
        prof.append(people*v[i])
    
    print(max(prof))
        
    t-=1 
