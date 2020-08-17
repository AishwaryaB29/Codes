#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector< vector<string> > v;
        unordered_map <string, vector<string> > m;
        int size = strs.size(),i;
        string s;
        for(i=0;i<size;i++) {
            s = strs[i];
            sort(s.begin(),s.end());
            if(m.find(s) == m.end()) {
                vector<string> v2 = {strs[i]};
                m[s] = v2;
            } else {
                m[s].push_back(strs[i]);
            }
        }
        
        for(auto it: m) {
            v.push_back(it.second);
        }
        
        return v;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
