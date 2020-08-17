#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

string countAndSay(int n) {
        int i,j;
        vector <string> v;
        string s = "1",s2;
        v.push_back(s);
        for(i=1;i<30;i++) {
            j = 1;
            char last = s[0];
            int c=1;
            while(j<s.length()) {
                if(s[j] == last)
                    c++;
                else {
                    s2  = s2 + to_string(c) + last;
                    last = s[j];
                    c = 1;
                }
                j++;
            }
            s2 = s2 + to_string(c) + last;
            v.push_back(s2);
            s = s2;
            s2 = "";
        }
        
        return v[n-1];
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
