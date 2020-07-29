#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

int maxArea(vector<int>& height) {
        vector <int> vol;
        int n = height.size(), i = 0, j = n-1;
        while(i<j)
        {
            if(height[i]<height[j]) 
                vol.push_back((j-i)*height[i]);                
            else 
                vol.push_back((j-i)*height[j]);
                
            cout<<i<<" "<<j<<endl;
            
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        
        // for(i=0;i<vol.size();i++)
        //     cout<<vol[i]<<" ";
        
        
        return *max_element(vol.begin(),vol.end());
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
