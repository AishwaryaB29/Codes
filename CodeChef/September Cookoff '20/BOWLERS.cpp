#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp> 
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--) {
        ll n,k,l;
        cin>>n>>k>>l;
        if(k*l < n) {
            cout<<"-1"<<endl;
        } else {
            if(k == 1 && n>1)
                cout<<"-1"<<endl;
            else {
                for(ll i=0;i<n;i++) {
                if((i+1)%k == 0)
                    cout<<k<<" ";
                else
                    cout<<(i+1)%k<<" ";
            }
            cout<<endl;   
            }
        }
    }
	return 0;
}
