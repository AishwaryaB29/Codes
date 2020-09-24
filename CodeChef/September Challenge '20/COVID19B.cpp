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
    ll n;
    while(t--) {
        cin>>n;
        vector<int> a(n);
        int i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        vector<int> b(n,1);
    	for(i=0;i<n;i++){
    	    for(j=0;j<i;j++) {
    			if(a[j]>a[i]) 
    			    b[i] +=1;
    	    }
    		for(j=i+1;j<n;j++){
    			if(a[i]>a[j]) 
    			    b[i] +=1;
    		}
        }
        
        cout<<*min_element(b.begin(),b.end())<<" "<<*max_element(b.begin(),b.end())<<endl;
    }
	return 0;
}
