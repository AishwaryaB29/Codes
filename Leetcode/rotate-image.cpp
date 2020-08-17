#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size(),i,j,temp;
        if(m == 0)
            return ;
        int n = matrix[0].size();
        if(n == 0)
            return ;
        
        for(i=0;i<m;i++) {
            for(j=i+1;j<n;j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        for(i=0;i<m;i++) {
            for(j=0;j<n/2;j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][n-j-1];
                matrix[i][n-j-1] = temp;
            }
        }
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
