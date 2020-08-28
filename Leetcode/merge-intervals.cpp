#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i = 1, n = intervals.size();
        while(i<n) {
            if(intervals[i][0] <= intervals[i-1][1]) {
                vector <int> temp;
                if(intervals[i][1] <= intervals[i-1][1])
                    temp = {intervals[i-1][0],intervals[i-1][1]};
                else
                    temp = {intervals[i-1][0],intervals[i][1]};
                intervals[i-1] = temp;
                intervals.erase(intervals.begin()+i);
            }
            else
                i++;
            n = intervals.size();
        }
        return intervals;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
