#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

 int myAtoi(string str) {
        int i,flag=0,minus=0,plus=0;
        long long int num = 0;
        
 
        
        for(i=0;i<str.length();i++)
        {
            if(str[i] != ' ') {
                if(flag == 0 && str[i] == '-' && (plus||minus))
                    break;
                else if(flag == 0 && str[i] == '-') 
                    minus = 1;
                else if(flag == 1 && str[i] == '-')
                    break;
                else if(flag == 0 && str[i] == '+' && (minus||plus))
                    break;
                else if(flag ==0 && str[i] == '+')
                    plus = 1;
                else if(flag == 1 && str[i] == '+')
                    break;
                else if(str[i] >= '0' && str[i] <= '9')
                {
                    if(num>(INT_MAX)/10 || num*10 > (INT_MAX - (str[i] - '0')))
                    {
                        if(minus)
                            return INT_MIN;
                        else
                            return INT_MAX;
                    }
                    else {
                        num = (num*10) + (str[i]-'0');
                        flag = 1;
                    }
                }
                else 
                    break;
            } 
            else 
            {
                if(flag == 1)
                   break;
                if(minus || plus)
                    break;
            }
            
        }
        if(minus == 1)
            num = -num;
        if(num> INT_MAX)
            return INT_MAX;
        if(num<INT_MIN)
            return INT_MIN;
        return num;
        
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
