#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,z;
    cin>>t;
    while(t--) {
        cin>>n>>z;
        priority_queue <ll> s;
        ll i,val,c=0;
        for(i=0;i<n;i++){
            ll el;
            cin>>el;
            s.push(el);    
        }
        
        while(z>0 && !s.empty()) {
            val = s.top();
            z = z - val;
            c++;
            s.pop();
            val = val/2;
            if(val != 0)
                s.push(val);
        }
        if(z>0) {
            cout<<"Evacuate"<<endl;
        }
        else {
            cout<<c<<endl;   
        }
    }
	return 0;
}
