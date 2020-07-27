#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(n) for (int i = 1; i < n; i++)

int fun(string s, int l, int r)
{
    while (l >= 0 && r <= s.length() - 1 && s[l] == s[r])
    {
        l--;
        r++;
    }
    return r - l - 1;
}
string longestPalindrome(string s)
{
    int n = s.length(), i, start = 0, end = 0;
    for (i = 0; i < n; i++)
    {
        int l1 = fun(s, i, i);
        int l2 = fun(s, i, i + 1);
        int l = max(l1, l2);
        if (l > end - start)
        {
            start = i - (l - 1) / 2;
            end = i + l / 2;
            //cout<<"g"<<endl;
        }
    }
    return s.substr(start, (end + 1) - start);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
