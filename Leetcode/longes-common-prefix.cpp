#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        string prefix = strs[0];
        int i,j,c;
        for(i = 1; i < strs.size(); i++)
        {
            string cstring = strs[i];
            c = 0;
            for(j=0;j<cstring.length();j++)
            {
                if(cstring[j] == prefix[j])
                    c++;
                else
                    break;
            }
            prefix = prefix.substr(0,c);
        }
        
        return prefix;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
