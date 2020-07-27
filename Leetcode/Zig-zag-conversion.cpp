#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(n) for (int i = 1; i < n; i++)

string convert(string s, int numRows)
{
    vector<vector<int>> v(numRows);
    bool up = true;
    int i, cnt = 0;
    if (s == "")
        return "";
    int xx;
    if (s.length() < numRows)
        xx = s.length();
    else
        xx = numRows;
    for (i = 0; i < xx; i++)
        v[i].push_back(i);
    for (i = numRows; i < s.length(); i++)
    {
        cnt++;
        if (up)
            v[(numRows - (cnt % numRows) - 1)].push_back(i);
        else
        {
            if ((cnt % numRows) < numRows)
                v[(cnt % numRows)].push_back(i);
        }
        if (cnt == numRows - 1)
        {
            up = !up;
            cnt = 0;
        }
    }

    // for(i=0;i<numRows;i++) {
    //     for(int j=0;j<v[i].size();j++)
    //         cout<<v[i][j]<<" ";
    //     cout<<endl;
    // }

    string ans = "";
    for (i = 0; i < numRows; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            ans += s[v[i][j]];
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
