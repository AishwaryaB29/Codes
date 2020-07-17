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
    ll t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        ll a[n],i;
        for(i=0;i<n;i++) 
            cin>>a[i];
        ll m = a[0],mind = 0;
        for(i=1;i<n;i++) {
            if(a[i]<m){
                m = a[i];
                mind = i;
            }
        }
        cout<<mind+1<<endl;
    }
	return 0;
}
