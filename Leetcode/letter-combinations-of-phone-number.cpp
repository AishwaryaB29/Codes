#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

vector<string> letterCombinations(string digits) {
        vector<string> v = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        
        string s = v[digits[0]-'2'];
        int i,j,k;
        
        for(i=0;i<s.length();i++)
        {
            string x = "";
            x+=s[i];
            cout<<x<<endl;
            ans.push_back(x);
        }
        
        for(i=1;i<digits.length();i++)
        {
            s = v[digits[i]-'2'];
            int sz = ans.size();
            for(j=0;j<sz;j++)
            {
                string x2 = ans[j];
                ans[j] += s[0]; 
                for(k=1;k<s.length();k++)
                {
                    ans.push_back(x2+s[k]);
                }
            }
        }
        
        
        return ans;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
