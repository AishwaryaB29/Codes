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
    ll t,y;
    cin>>t;
    while(t--) {
        cin>>y;
        ll limit = 700;
        ll rooty = sqrt(y), ans = 0;
        for(ll i=1; i<=min(y,limit); i++) {
            if(y-i>0)
                ans+=floor(sqrt(y-i));
        }
        cout<<ans<<endl;
    }
	return 0;
}
