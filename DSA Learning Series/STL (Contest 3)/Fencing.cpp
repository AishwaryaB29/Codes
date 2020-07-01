#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m,k;
    cin>>t;
    while(t--) {
    cin>>n>>m>>k;
    ll a[n][n];
    set < pair<ll,ll> > s,s2;
    ll i,x,y;
    for(i=0;i<k;i++) {
        cin>>x>>y;
        s.insert(mp(x,y));
    }
    
    ll ans = 0;
    for(auto it : s) {
        s2.insert(mp(it.first,it.second));
        int c = 4;
        ll x1,x2,y1,y2;
        x = it.first; y = it.second;
        x1 = x+1; y1 = y+1;
        x2 = x-1; y2 = y-1;
        
        auto itr = s2.find(mp(x,y1));
        if(itr!=s2.end()) 
            c-=2;
        
        itr = s2.find(mp(x2,y));
        if(itr!=s2.end())
            c = max(0,c-2);
        
        itr = s2.find(mp(x,y2));
        if(itr!=s2.end())
            c = max(0,c-2);
        
        itr = s2.find(mp(x1,y));
        if(itr!=s2.end())
            c = max(0,c-2);
        
        ans+=c;
    }
    
    cout<<ans<<endl;
    
    }
	return 0;
}
