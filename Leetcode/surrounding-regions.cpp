#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

void solve(vector<vector<char>>& board) {
        //only border cases
        int m = board.size();
        if(m == 0)
            return;
        int n = board[0].size(),i,j;
        vector<vector<int>> flag;
        for(i=0;i<m;i++) {
            vector<int> v;
            for(j=0;j<n;j++) 
                v.push_back(0);
            flag.push_back(v);
        }
        
        for(j=0;j<n;j++) {
            if(board[0][j] == 'O') {
                flag[0][j] = 1;
                if(1<m)
                    flag[1][j] = 1;
            }
        }
        
        for(i=0;i<m;i++) {
            if(board[i][n-1] == 'O') {
                flag[i][n-1] = 1;
                if(n-2 >= 0)
                    flag[i][n-2] = 1;
            }
        }
        
        for(j=n-1;j>=0;j--) {
            if(board[m-1][j] == 'O') {
                flag[m-1][j] = 1;
                if(m-2 >= 0)
                    flag[m-2][j] = 1;
            }
        }
        
        for(i=m-1;i>=0;i--) {
            if(board[i][0] == 'O') {
                flag[i][0] = 1;
                if(1<n)
                    flag[i][1] = 1;
            }
        }
        
        for(i=0;i<m;i++) {
            for(j=0;j<n;j++) {
                if(board[i][j] == 'O' && flag[i][j] == 0) 
                    board[i][j] = 'X';
            }
        }
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
