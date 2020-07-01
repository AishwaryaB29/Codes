#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m],i,j,sz,ind=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    ll min = a[0],max = b[0],minind=0,maxind=0;
    for(i=1;i<n;i++) {
        if(a[i]<min) {
            min = a[i];
            minind = i;
        }
    }
    for(i=1;i<m;i++) {
        if(b[i]>max) {
            max = b[i];
            maxind = i;
        }
    }
    
    vector < pair<ll,ll> > ans;
    
    for(i=0;i<m;i++)
        ans.pb(mp(minind,i));
    
    for(i=0;i<n;i++) {
        if(i!=minind)
            ans.pb(mp(i,maxind));
    }
        
    
   
    for(i=0;i<n+m-1;i++) {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
	return 0;
}
