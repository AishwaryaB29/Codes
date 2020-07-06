#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp> 
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair


ll SmallestPerfectSquare(ll N){ 
    ll X = (ll)1e9;  
    ll ans;   
    for(int i = 1; i < sqrt(N); i++) 
    {   
        if (N % i == 0) 
        {  
            ll a = i;  
            ll b = N / i;   
            if((b - a != 0) && ((b - a) % 2 == 0)) 
            {    
                X = min(X, (b - a) / 2);  
            }  
        }  
    }   
    if (X != 1e9)  
        ans = X * X;  
    else
        ans = -1;  
              
    return ans;  
}  


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        cout<<SmallestPerfectSquare(n)<<endl;   
    }
	return 0;
}
