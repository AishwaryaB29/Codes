#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

int binarySearch(int start, int end, vector<int> nums, int target) {
        cout<<start<<" "<<end<<endl;
        if(start<=end) {
        int mid = (start+end)/2;
        if(nums[mid] == target)
            return mid;
        
        if(nums[start] == target)
            return start;
        
        if(nums[end] == target)
            return end;
        
        if(nums[start]<=nums[mid] && nums[mid]<=nums[end])
        {
            cout<<"1"<<endl;
            if(target<nums[mid])
                return binarySearch(start,mid-1,nums,target);
            else
                return binarySearch(mid+1,end,nums,target);   
        }
        
        else {
            cout<<"2"<<endl;
            if(nums[start]<nums[mid])
            {
                if(target<nums[mid] && target<nums[start])
                    return binarySearch(mid+1,end,nums,target);
                else if(target<nums[mid] && target>=nums[start])
                    return binarySearch(start,mid-1,nums,target);
                else if(target>nums[mid])
                    return binarySearch(mid+1,end,nums,target);
            }
            
            else
            {
                if(target>nums[mid] && target<nums[start])
                    return binarySearch(mid+1,end,nums,target);
                else if(target>nums[mid] && target>=nums[start])
                    return binarySearch(start,mid-1,nums,target);
                else if(target<nums[mid])
                    return binarySearch(start,mid-1,nums,target);
            }
        }
        }
        else
            return -1;
        
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        return binarySearch(0,nums.size()-1,nums,target); 
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
