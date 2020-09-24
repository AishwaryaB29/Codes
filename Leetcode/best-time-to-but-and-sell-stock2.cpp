#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

int maxProfit(vector<int>& prices) {
        int len=prices.size();
        int profit=0;

        if(len==0||len==1)
            return 0;

        for(int i=0;i<len-1;i++)
        {
            if(prices[i]<prices[i+1])
                profit+=prices[i+1]-prices[i];
        }

        return profit;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
