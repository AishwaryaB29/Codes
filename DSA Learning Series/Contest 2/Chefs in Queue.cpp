#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair



int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll a[n],i,ans = 1;
    for(i=0;i<n;i++)
        cin>>a[i];
        
    stack <pair<ll,ll>> s;
    
    for(i=0;i<n;i++)
    {
        if(!s.empty()) {
            if(a[i]>s.top().first)
                s.push(mp(a[i],i));
            else {
                while(!s.empty() && s.top().first >a[i]) {
                    pair<ll,ll> p = s.top();
                    ans = (ans * ((i-p.second)+1))%MOD;
                    //cout<<i<<" "<<p.second<<endl;
                    s.pop();
                }
                s.push(mp(a[i],i));
            }
        }
        else {
            s.push(mp(a[i],i));
        }
    }
    
    cout<<ans%MOD<<endl;
    
	return 0;
}
