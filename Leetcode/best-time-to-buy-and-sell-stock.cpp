#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

int maxProfit(vector<int>& prices) {
        int i, n = prices.size();
        if(n == 0)
            return 0;
        int maxProfit = 0;
        int minPrice = prices[0];
        for(i=1;i<n;i++) {
            if(prices[i]<minPrice)
                minPrice = prices[i];
            else 
                if(prices[i]-minPrice > maxProfit)
                    maxProfit = prices[i]-minPrice;
        }
        
        return maxProfit;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
