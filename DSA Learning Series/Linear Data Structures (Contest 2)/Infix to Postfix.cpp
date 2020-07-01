#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int precedence(char symbol)
{
	if(symbol == '^')/* exponent operator, highest precedence*/
	{
		return(3);
	}
	else if(symbol == '*' || symbol == '/')
	{
		return(2);
	}
	else if(symbol == '+' || symbol == '-')          /* lowest precedence */
	{
		return(1);
	}
	else
	{
		return(-1);
	}
}

void showstack(stack <char> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i;
    cin>>t;
    while(t--) {
        cin>>n;
        string s,s2 = "";
        stack <char> st;
        cin>>s;
        for(i=0;i<n;i++) {
            if(s[i] == '(') {
                st.push(s[i]);
            }
            else if(isalpha(s[i])){
                s2 += s[i];
            }
            else if(s[i] == ')') {
                while((!st.empty()) && st.top()!='(') {
                    s2 = s2 + st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                if(!st.empty() && st.top() != '('){
                    if(precedence(st.top())>=precedence(s[i])) {
                        while(!st.empty() && precedence(s[i]) <= precedence(st.top())) {
                            s2 = s2 + st.top();
                            st.pop();
                        }
                        st.push(s[i]);
                    }
                    else
                        st.push(s[i]);
                }
                else
                    st.push(s[i]);
                //st.push(s[i]);
                //showstack(st);
            } 
            
        }
        
        while(!st.empty()) {
            s2 += st.top();
            st.pop();
        }
        
        cout<<s2<<endl;
    }
	return 0;
}
