#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp> 
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i = 0; i<n; i++)
#define loop1(n) for(int i = 1; i<n; i++)

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        ll i, a[n];
        loop(n) 
            cin>>a[i];
            
        ll sum[n];
        sum[0] = 1;
        loop1(n) {
            if(a[i]>=a[i-1])
                sum[i] = sum[i-1] + 1;
            else 
                sum[i] = 1;
        }
        
        ll ans = 0;
        loop(n)
            ans += sum[i];
        
        cout<<ans<<endl;
        
    }
	return 0;
}
