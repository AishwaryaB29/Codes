#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        ll n = s.length();
        int i,c = 0,c1 = 0;
        stack <char> st;
        for(i=0;i<n;i++){
            if(s[i] == '<') {
                c1 +=1;
                st.push('<');
            }
            else if (s[i] == '>') {
                if(st.empty()) 
                    break;
                else {
                    st.pop();
                    if(st.empty()){
                        c1++;
                        c += c1;
                        c1 = 0;
                    }
                    else
                        c1+=1;
                }
            }
        }
        
        cout<<c<<endl;
        
    }
	return 0;
}
