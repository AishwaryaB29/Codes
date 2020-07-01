t = int(input())
while(t>0): 
    s = input().split(' ')
    n = int(s[0])
    m = int(s[1])
    k = int(s[2])
    a = []
    for i in range (n):
        a.append(input().split(' '))
        for j in range (k):
            a[i][j] = int(a[i][j])
    
    x = 0
    y = []
    wt = [1]*k
    for i in range (n):
        prob = []
        res = {}
        for j in a[i]:
            if(j in res):
                res[j] +=1 
            else:
                res[j] = 1
        freq = []
        for j in range (k):
            freq.append(res[a[i][j]])
            prob.append((freq[j]/k)*(1/wt[j]))
        
        mx = max(prob)
        for j in range (k):
            if(prob[j] == mx):
                mind = j
        #print(prob)
        for j in range (k):
            if(a[i][j] == a[i][mind]):
                wt[j] += 1 
                
        y.append(a[i][mind])
    
    for i in range (n):
        print(y[i],end = " ")
            
    
    t-=1 
