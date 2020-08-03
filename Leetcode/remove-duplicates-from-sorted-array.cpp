#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

int removeDuplicates(vector<int>& nums) {
        set <int> s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        
        nums.clear();
        
        for(auto itr: s)
        {
            nums.push_back(itr);
        }
        
        for(int i=0;i<nums.size();i++)
            cout<<nums[i]<<" ";
        return s.size();
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
