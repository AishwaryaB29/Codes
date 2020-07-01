#include <bits/stdc++.h>
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
        vector <ll> a(n);
        ll i;
        for(i=0;i<n;i++)
            cin>>a[i];
        multiset <ll> s;
        for(i=0;i<n;i++) {
            if(s.empty())
                s.insert(a[i]);
            else {
                // for(auto it: s)
                //     cout<<it<<" ";
                // cout<<endl;
                    auto it = s.upper_bound(a[i]);
                    if(it == s.end())
                        s.insert(a[i]);
                    else {
                        if(*it == a[i]){
                            it++;
                            s.erase(it);
                            s.insert(a[i]);
                        }
                        else {
                            s.erase(it);
                            s.insert(a[i]);
                        }
                    }
            }
        }
        
        
        cout<<s.size()<<" ";
        for(auto itr: s) 
            cout<<itr<<" ";
        cout<<endl;
    }
    
	return 0;
}
