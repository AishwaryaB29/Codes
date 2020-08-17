#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

int search(vector<int> nums, int start, int end, int target) {
        int mid = (start+end)/2;
        if(start<=end) {
            if(nums[mid] == target)
                return mid;
            else if(target < nums[mid])
                return search(nums,start,mid-1,target);
            else
                return search(nums,mid+1,end,target);
            }
        else
            return -1;
    }
    
    int leftSearch(vector<int> nums, int start, int end, int target) {
        int mid = (start+end)/2;
        //cout<<start<<" "<<end<<endl;
        if(start<=end) {
            if(mid-1>=start) {
                //cout<<"1"<<endl;
                if(nums[mid] == target && nums[mid-1] != target)
                    return mid;
                if(nums[mid] == target && nums[mid-1] == target)
                    return leftSearch(nums,start,mid-1,target);   
            }
            if(mid == start && nums[start] == target)
                return start;
            return leftSearch(nums,mid+1,end,target);
        }
        else
            return -1;
    }
    
    int rightSearch(vector<int> nums, int start, int end, int target) {
        int mid = (start+end)/2;
        //cout<<start<<" "<<end<<endl;
        if(start<=end) {
            if(mid+1<=end) {
                //cout<<"1"<<endl;
                if(nums[mid] == target && nums[mid+1] != target)
                    return mid;
                if(nums[mid] == target && nums[mid+1] == target)
                    return rightSearch(nums,mid+1,end,target);   
            }
            if(nums[end] == target && mid == start)
                return end;
            return rightSearch(nums,start,mid-1,target);
        }
        
        return -1;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        //std::iota (std::begin(v), std::end(v), 0);
        int m = search(nums,0,nums.size()-1,target);
        if(m == -1) {
            vector <int> v = {-1,-1};
            return v;
        }
        int m2 = leftSearch(nums,0,m,target);
        int m3 = rightSearch(nums,m,nums.size()-1,target);
        
        vector <int> v = {m2,m3};
        
        return v;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
