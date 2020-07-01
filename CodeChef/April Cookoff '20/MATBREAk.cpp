#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define MOD (1000000007)

long long int calcPower(long long int x,long long int y)
{
    long long int res = 1;    
    x = x % MOD; 
    if (x == 0)
        return 0; 

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % MOD;

        y = y>>1; 
        x = (x*x) % MOD;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t; 
    cin>>t;
    for(int u=0;u<1000;u++);
    for(int testcase=0;testcase<t;testcase++) 
    {
        long long int n,a;
        cin>>n>>a;
        long long int x,s=0;
        vector<long long int> arr;
        for(long long int i=1;i<=n;i++)
        {   
            x = calcPower(a,(2*i-1))%MOD;
            arr.pb(x);
            a=(a*x)%MOD;    
        }
    for(auto x:arr) 
        s+=x;
    cout<<(s%MOD)<<endl;
    }
    return 0;
}
