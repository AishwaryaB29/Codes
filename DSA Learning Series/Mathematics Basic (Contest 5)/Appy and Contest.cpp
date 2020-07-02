#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp> 
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,a,b,k;
    cin>>t;
    while(t--) {
        cin>>n>>a>>b>>k;
        ll a1 = n/a;
        ll b1 = n/b;
        ll c = n/((a*b)/__gcd(a,b));
        //cout<<a1<<" "<<b1<<" "<<c<<endl;
        ll ans = a1 + b1 - (2*c);
        //cout<<ans<<endl;
        if(ans>=k)
            cout<<"Win"<<endl;
        else
            cout<<"Lose"<<endl;
    }
	return 0;
}
