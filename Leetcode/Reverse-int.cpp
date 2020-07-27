#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(n) for (int i = 1; i < n; i++)

int reverse(int x)
{
    if (x == 0)
        return 0;
    int n = abs(x), numzeroes = 0, flag = 0;
    long long num = 0;
    while (n != 0)
    {
        if (n % 10 == 0 && flag == 0)
        {
            n = n / 10;
        }
        else
        {
            flag = 1;
            num = (num * 10) + n % 10;
            n = n / 10;
        }
    }
    if (x < 0)
        num = 0 - num;
    return (num > INT_MAX || num < INT_MIN) ? 0 : num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
