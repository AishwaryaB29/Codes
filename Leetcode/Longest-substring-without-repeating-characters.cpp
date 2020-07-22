#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0,maxsize = 0;
        unordered_set <char> s2;
        while(i<s.length() && j<s.length()) {
            if(s2.find(s[j]) == s2.end()) {
                s2.insert(s[j]);
                j++;
                if(j-i > maxsize)
                    maxsize = j-i;
            } else {
                s2.erase(s2.find(s[i]));
                i++;
            }
        }
        return maxsize;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}

// This uses hashing and Two pointers and Sliding Window.