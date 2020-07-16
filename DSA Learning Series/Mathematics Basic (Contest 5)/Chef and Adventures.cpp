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
    ll t,n,m,x,y;
    cin>>t;
    while(t--) {
        cin>>n>>m>>x>>y;
        n-=1;
        m-=1;
        if(n == 1 && m == 1)
            cout<<"Chefirnemo"<<endl;
        else if(n<x || m<y) {
            cout<<"Pofik"<<endl;
        } 
        else {
            int flag;
            if(n == x || n%x == 0) 
                flag = 0;
            else if((n-1)%x == 0) 
                flag = 1;
            else 
                flag = -1;
                
            bool flag2;
            if(m == y || m%y == 0) 
                flag2 = 0;
            else if((m-1)%y == 0)
                flag2 = 1;
            else
                flag2 = -1;
            
            if(flag == 0) {
                if(flag2 == 0) 
                    cout<<"Chefirnemo"<<endl;
                else 
                    cout<<"Pofik"<<endl;
            }
            else if(flag == 1) {
                if(flag2 == 1  and min(n,m)>0) 
                    cout<<"Chefirnemo"<<endl;
                else 
                    cout<<"Pofik"<<endl;
            }
            else {
                cout<<"Pofik"<<endl;
            }
            
        }
    }
    
	return 0;
}
