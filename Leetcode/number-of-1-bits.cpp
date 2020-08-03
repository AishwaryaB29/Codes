#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

int hammingWeight(uint32_t n) {
        int sum = 0;
        while(n != 0){
            if(n % 2 == 1){
                sum += 1;
            }
            n = n / 2;
        }
        return sum;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
