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
    int i,j,a[n+1][n+1],k;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    }
        
    int c=0,flag = 0;
	for(k=n;k>0;k--)
	{
	    
		int i=k,j=1;
		if(flag) 
		    swap(a[i][j], a[j][i]);
		if(a[i][j]!= (i-1)*n+j) {
			flag = 1-flag;
			c+=1;
		}
	}
	    cout<<c<<endl;
    }
	return 0;
}
