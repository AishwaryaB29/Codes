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
    while(t--){
        cin>>n;
        ll a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        
        ll m = 0;
        for(i=0;i<n;i++){
            ll sum = 0;
            sum = (a[i] + a[(i+1)%n] + a[(i+2)%n]);
            if(sum>m)
                m = sum;
        }
        cout<<m<<endl;
    }
    
	return 0;
}
