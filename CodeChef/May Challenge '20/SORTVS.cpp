#include <bits/stdc++.h>
using namespace std;

int search(int a[],int n,int target)
{
int i = 1;
    for(i=1;i<n;i++)
    {
       if(a[i]==target)
       break;
    }
    return i;
  
}

int check(vector<int>v[],int x,int n)
{
        for(auto j=v[x].begin();j!=v[x].end();j++)
        {
            if(*j==n)
            return 1;
        }
        return 0;
}
int main()
{
    int t;
    cin>>t;
    for(int testcase = 0; testcase<t;testcase++)
    {
        int n,m,x,y,i,j = 0,u = 0;
        cin>>n;
        cin>>m;
        int n2=n+1;
        vector<int> v[n2];
        int a[n2];
        a[0]=0;
        for(i=1;i<n2;i++)
            cin>>a[i];
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
        }
        
        int c=0;
        for(int l = 0;l<1000;l++)
            u++;
        i = 1;
        while(i<n2)
        {
            //cout<<"loop "<<i<<endl;
            if(v[i].empty())
            {
                i+=1;
                continue;
            }
            else
            {
                int x2=i,y2;
                for(auto k=v[i].begin();k!=v[i].end();k++)
                {
                    y2=*k;
                    if(a[x2]==x2)
                        break;
                    if(a[y2]==y2)
                        continue;
                    if(a[x2]!=y2)
                    {
                        u = 0;
                        int up1 = search(a,n2,y2);
                        if(check(v,x2,up1))
                            swap(a[x2],a[up1]);
                        else
                            {
                                swap(a[x2],a[up1]);
                                c++;
                            }
                            
                    }
                     if(a[y2]!=x2)
                    {
                        int up = search(a,n2,x2);
                        if(check(v,y2,up))
                            swap(a[y2],a[up]);
                        else
                        {
                            swap(a[y2],a[up]);
                            c++;
                        }
                        
                    }
                    u = 0;
                    swap(a[x2],a[y2]);
                }
                i+=1;
            }
        }
        int flag = 0;
        j = 0;
        for(int l = 0;l<1000;l++)
            u++;
        while(flag == 0)
        {
            if(is_sorted(a,a+n2))
             {   flag = 1;
                break;
             }
                
            int mind=max_element(a,a+n2-j)-a;
            if(n2-1-j==mind)
            {
                j++;
                continue;
            }
            else
            {
                swap(a[mind],a[n2-1-j]);
                c++;
                j++;
            }
            
        }
        
        cout<<c<<endl;   
    }
}
