#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

bool isPalindrome(int x) {
        ostringstream str1;
        string s;
        str1 << x;
        s = str1.str();
        if(s[0] == '-' || s[0] == '+')
            return false;
        
        int i = 0, flag = 0,n = s.length();
        while(i<(n/2))
        {
            if(s[i] == s[n-i-1])
                i++;
            else
            {
                flag = 1;
                break;
            }
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
