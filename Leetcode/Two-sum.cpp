#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(n) for (int i = 1; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // FUNCTION
    vector<int> twoSum(vector<int> & nums, int target)
    {
        unordered_map<int, int> m;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            //cout<<m[target-nums[i]]<<" ";
            if (m.find(target - nums[i]) != m.end())
            {
                res.push_back(m[target - nums[i]]);
                res.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }

        return res;
    }

    return 0;
}
