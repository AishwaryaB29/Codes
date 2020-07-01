def longest(a, n, k): 
  
        freq = [0]*n
      
        start = 0
        end = 0
        now = 0
        l = 0
        for i in range(n): 
            freq[a[i]] += 1
            if (freq[a[i]] == 1): 
                now += 1
            while (now > k) : 
                freq[a[l]] -= 1
                if (freq[a[l]] == 0): 
                    now -= 1
       
                l += 1
            if (i - l + 1 >= end - start + 1): 
                end = i 
                start = l 
        return end-start+1 

for _ in range(int(input())):
    n,k=map(int,input().split(" "))
    lst=list(map(int,input().split(" ")))
    maxi=0
    if(k==2):
        ctr=0
        while(True):
            ele=lst[ctr]
            count=1
            while(ctr!=len(lst)-1):
                ctr+=1
                if(lst[ctr]!=ele):
                    break
                else:
                    count+=1
                
            if(count>maxi):
                maxi=count
            if(ctr>=len(lst)-1):
                break
        print(maxi)
    else:
        print(longest(lst,n,k-1))
