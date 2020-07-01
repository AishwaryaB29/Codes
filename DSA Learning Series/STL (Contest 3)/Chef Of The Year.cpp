#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define barry_allen ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main()
{
    barry_allen;
    
    ll n,k;
    cin>>n>>k;
    
    string a,b;
    
    map<string,string> maps;
    
    while(n--)
    {
        cin>>a>>b;
        maps[a]=b;
    }
    
    map<string,ll> map1;
    map<string,ll> map2;
    
    while(k--)
    {
        cin>>a;
        map1[a]++;
        map2[maps[a]]++;
    }
    
    ll max=LONG_MIN;
    string res1="",res2="";
    
    for(auto itr=map2.begin();itr!=map2.end();itr++)
    {
        if(itr->second>max)
        {
            max=itr->second;
            res1=itr->first;
        }
    }
    
    max=LONG_MIN;
    for(auto itr=map1.begin();itr!=map1.end();itr++)
    {
        if(itr->second>max)
        {
            max=itr->second;
            res2=itr->first;
        }
    }
    
    cout<<res1<<"\n";
    cout<<res2;
    
    return 0;
}
