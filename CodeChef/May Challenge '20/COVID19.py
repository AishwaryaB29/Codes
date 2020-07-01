t = int(input())
while(t>0): 
    n = int(input())
    s = input().split(' ')
    for i in range (n):
        s[i] = int(s[i])
    s2 = []
    for i in range (n):
        j = i-1 
        c = 1
        while(j>=0):
            if(s[j+1]-s[j]<=2):
                c+=1
            else:
                break
            j-=1 
        j = i+1
        while(j<n):
            if(s[j]-s[j-1]<=2):
                c+=1 
            else:
                break
            j+=1 
        s2.append(c)
    print(min(s2),max(s2))
            
    t-=1 
