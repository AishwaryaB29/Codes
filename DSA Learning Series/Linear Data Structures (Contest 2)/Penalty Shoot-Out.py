t = int(input())
while(t>0): 
    n = int(input())
    s = input()
    a = []
    b = []
    for i in range (2*n):
        if(i%2 == 0):
            a.append(int(s[i]))
        else:
            b.append(int(s[i]))
    
    ascore = 0
    bscore = 0
    atot = n 
    btot = n 
    
    ans = 2*n 
    
    for i in range (n):
        if(a[i] == 1):
            ascore+=1 
        else:
            atot-=1 
        
        if(btot<ascore):
            ans = 2*i +1  
            break
        
        if(atot<bscore):
            ans = 2*i + 1 
            break
        
        if(b[i] == 1):
            bscore +=1 
        else:
            btot -=1 
        
        if(btot<ascore):
            ans = 2*(i + 1 )
            break
        
        if(atot<bscore):
            ans = 2*(i + 1)
            break
    
    print(ans)
        
        
    t-=1 
