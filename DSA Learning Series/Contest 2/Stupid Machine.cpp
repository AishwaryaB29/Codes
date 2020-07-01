#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        vector <long long int> a(n);
        long long int i;
        for(i=0;i<n;i++)
            cin>>a[i];
        long long int m = a[0];
        for(i=1;i<n;i++) {
            if(a[i]>m)
                a[i] = m;
            else
                m = a[i];
        }
        long long int sum = 0;
        for(i=0;i<n;i++)
            sum += a[i];
        
        cout<<sum<<endl;
        
    }
	return 0;
}
