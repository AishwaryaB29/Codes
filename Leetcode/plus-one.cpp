#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

vector<int> plusOne(vector<int>& digits) {
        int num = 0,i;
        i = digits.size()-1;
        if(digits[i]+1 == 10) {
            int flag = 1;
            digits[i] = 0;
            i--;
            while(i>=0) {
                if(digits[i]+1 == 10)
                    digits[i] = 0;
                else {
                    flag = 0;
                    digits[i]++;
                    break;
                }
                i--;
            }
            if(flag)
                digits.insert(digits.begin(),1);
        } else {
            digits[i]++;
        }
        return digits;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
