#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

 void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(),i,j,flag;
        for(i=0;i<m;i++) {
            for(j=0;j<n;j++) {
                if(matrix[i][j] != 0) {
                    flag = 0;
                    for(int k = 0;k<m;k++) {
                        if(matrix[k][j] == 0)
                            flag = 1;
                    }
                    if(flag == 1)
                        matrix[i][j] = INT_MAX-1;    
                    else {
                        flag = 0;
                        for(int k=0;k<n;k++) {
                            if(matrix[i][k] == 0)
                                flag = 1;
                        }
                        if(flag == 1) 
                            matrix[i][j] = INT_MAX-1;
                    }
                }
                
            }
        }
        for(i=0;i<m;i++) {
            for(j=0;j<n;j++)
                if(matrix[i][j] == INT_MAX-1)
                    matrix[i][j] = 0;
        }
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
