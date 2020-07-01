t = int(input())
while(t>0): 
    n = int(input())
    s = input().split()
    for i in range (n):
        s[i] = int(s[i])

    c = 0
    prev = 0
    flag = 0
    lasteven = -1
    lastflag = -1
    
    for i in range (n):
        if(s[i]%2 ==0):
            if(s[i]%4 == 2):
                if(flag > 0):
                    prev+=(lastflag-lasteven)
                    lasteven=lastflag
                    c+=prev
                else:
                    flag = 1 
                    c+=prev 
                lastflag = i
            else:
                c+=i+1 
                prev = i+1
                lasteven = i
                if(flag>0):
                    flag = 0
        else:
            c+=prev
        #print(c)
    #print(c)
    fl = 0
    k = 0
    for i in range (n):
        if(s[i]%2 == 1):
            if(fl):
                k+=1 
            else:
                fl = 1 
                k = 1
        else:
            if(fl == 1):
                c = c + ((k*(k+1))//2)
                k = 0
                fl = 0
    if(fl):
        c = c + ((k*(k+1))//2)
    print(c)
    t-=1 
