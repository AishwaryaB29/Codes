#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

char ff(char in) {
        if (in <= 'Z' && in >= 'A')
            return in - ('Z' - 'z');
        return in;
    }
    bool isPalindrome(string s) {
        int i,n=s.length();
        if(n==0 || n == 1)
            return true;
        vector <char> v,v2;
        for(i=0;i<n;i++) {
            if(isalnum(s[i])) {
                v.push_back(ff(s[i]));
                v2.push_back(ff(s[i]));
            }
                
        }
        reverse(v2.begin(),v2.end());
        int flag = 0;        
        for(i=0;i<v.size();i++) {
            if(v[i] != v2[i])
                flag = 1;
        }
        
        if(flag)
            return false;
        else
            return true;
        
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
