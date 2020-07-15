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
    int arr[60] = {0,1,1,2,3,5,8,3,1,4,5,9,4,3,7,0,7,7,4,1,5,6,1,7,8,5,3,8,1,9,0,9,9,8,7,5,2,7,9,6,5,1,6,7,3,0,3,3,69,5,4,9,3,2,5,7,2,9,1};
    
    while(t--) {
        cin>>n;
        ll power = log2(n);
        ll power2 = pow(2,power);
        ll mod = power2%60;
        cout<<arr[mod-1]<<endl;
        
    }
	return 0;
}
