#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

vector<vector<int> > v;
    void permute(vector<int> a, int l, int r)  
    {   
        if (l == r)  
            v.push_back(a); 
        else
        {    
            for (int i = l; i <= r; i++)  
            {  
                swap(a[l], a[i]);  
                permute(a, l+1, r);  
                swap(a[l], a[i]);  
            }  
        }  
    }  
    vector<vector<int>> permute(vector<int>& nums) {
        permute(nums,0,nums.size()-1);
        return v;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
