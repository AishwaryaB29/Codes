#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

bool canJump(vector<int>& nums) {
        int i = 0,n = nums.size();
        if(n == 1)
            return true;
        int j,mx,m,mxind;
        while(i<n) {
            if(nums[i] == 0)
                return false;
            if(i+nums[i]>=n-1)
                return true;
            mx = INT_MIN;
            mxind = -1;
            for(j=1;j<=nums[i];j++) {
                if(i+j + nums[i+j] >=n-1)
                    return true;
                if(nums[i+j] != 0) {
                m = i+j + nums[i+j];
                if(m>mx) {
                    mx = i+j+nums[i+j];
                    mxind = i+j;
                } }
            }
            if(mxind < 0)
                return false;
            i = mxind;
            cout<<i<<" "<<mx<<endl;
        }
        return false;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
