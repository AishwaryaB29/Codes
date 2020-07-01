import numpy as np
t = int(input())

def prCharWithFreq(str) : 
    n = len(str) 
    freq = np.zeros(26, dtype = np.int) 
    for i in range(0, n) : 
        freq[ord(str[i]) - ord('a')] += 1 
    l = {}
    for i in range(0, n) : 
        if (freq[ord(str[i])- ord('a')] != 0) : 
            l[str[i]] = freq[ord(str[i]) - ord('a')]
            freq[ord(str[i]) - ord('a')] = 0
    return l 
    
while(t>0): 
    s = input()
    n = len(s)
    s1 = s[:n//2:]
    if(n % 2 == 0):
        s2 = s[n//2::]
    else:
        s2 = s[n//2+1::]
    
    f = 0
    
    l1 = prCharWithFreq(s1)
    l2 = prCharWithFreq(s2)
    
    for i in l1:
        if(i not in l2):
            f = 1 
    for i in l2:
        if(i not in l1):
            f = 1 
    
    if(f):
        print("NO")
    else:
        for i in l1:
            if(l1[i] == l2[i]):
                o = 1 
            else:
                f = 1 
                break
        
        for i in l2:
            if(l2[i] == l1[i]):
                o = 1 
            else:
                f = 1 
                break 
            
        if(f):
            print("NO")
        else:
            print("YES")
    t-=1 
