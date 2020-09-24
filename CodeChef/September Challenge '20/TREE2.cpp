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
    ll t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int i,x,ans=0;
        unordered_set<int> s {};  
        for(i=0;i<n;i++) {
            cin>>x;
            if(x>0) {
                if(s.find(x) == s.end()) {
                s.insert(x);
                ans++;
            }   
            }
        }
        
        cout<<ans<<endl;
    }
	return 0;
}
