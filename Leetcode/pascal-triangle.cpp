#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

 vector<vector<int>> generate(int numRows) {
        int i,j;
        vector <int> row = {1,1};
        vector<vector<int>> sol;
        if(numRows == 0)
            return sol;
        sol.push_back({1});
        if(numRows == 1) 
            return sol;
        sol.push_back({1,1});
        for(i=2;i<numRows;i++) {
            if(row.size() == 1) {
                sol.push_back(row);   
            }
            else {
                vector<int> temp = {1};
                for(j=0;j<row.size()-1;j++) {
                    temp.push_back(row[j]+row[j+1]);
                }
                temp.push_back(1);
                sol.push_back(temp);
                row.clear();
                for(j=0;j<temp.size();j++)
                    row.push_back(temp[j]);
            }
        }
        
        return sol;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
