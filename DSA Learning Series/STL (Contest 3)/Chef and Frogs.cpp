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
    ll n,k,p;
    cin>>n>>k>>p;
    map<ll,ll> a, maxreach;
    ll a2[n];
    loop(n) {
        ll value;
        cin>>value;
        a2[i] = value;
        a[value] = i;
    }
    
    map<ll,ll>::reverse_iterator it;
    bool flag = true;
    ll last;
    for (it = a.rbegin(); it != a.rend(); it++) { 
        if(flag) {
            maxreach[it->first] = it->first+k;
            last = it->first;
            flag = false;
        } else {
            if(it->first+k>=last)
                maxreach[it->first] = maxreach[last];
            else
                maxreach[it->first] = it->first+k;
            last = it->first;
        }
    } 
    
    // for(auto itt:maxreach) {
    //     cout<<itt.first<<" "<<itt.second<<endl;
    // }
    
    loop(p) {
        ll a,b,a1,b1;
        cin>>a1>>b1;
        if(a2[a1-1]<a2[b1-1]) {
            a = a1;
            b = b1;
        } else {
            a = b1;
            b = a1;
        }
        //cout<<maxreach[a2[a-1]]<<" "<<maxreach[a2[b-1]]<<endl;
        if(maxreach[a2[a-1]]>=maxreach[a2[b-1]])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
	return 0;
}
