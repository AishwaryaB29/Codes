#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        int i;
        for(i=0;i<nums.size();i++) {
            if(nums[i] == 0)
                c0++;
            if(nums[i] == 1)
                c1++;
            if(nums[i] == 2)
                c2++;
        }
        for(i=0;i<c0;i++)
            nums[i] = 0;
        
        for(i=0;i<c1;i++)
            nums[c0+i] = 1;
        
        for(i=0;i<c2;i++)
            nums[c0+c1+i] = 2;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
