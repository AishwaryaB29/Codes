#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair

int gcd(int a, int b) 
{  
    if (a == 0 || b == 0) 
       return 0; 

    if (a == b) 
        return a; 

    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,l,b;
    cin>>t;
    while(t--) {
        cin>>l>>b;
        cout<<gcd(l,b)<<endl;
    }
	return 0;
}
