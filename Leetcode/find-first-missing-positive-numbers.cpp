#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min = 1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == min)
                min++;
        }
        
        return min;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
