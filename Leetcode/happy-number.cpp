#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(n) for (int i = 1; i < n; i++)

bool isHappy(int n)
{
    vector<int> v;
    int flag = 1;
    while (flag == 1)
    {
        if (n == 1)
        {
            flag = 2;
            break;
        }

        if (std::find(v.begin(), v.end(), n) != v.end())
        {
            flag = 0;
            break;
        }
        v.push_back(n);
        int num = n;
        n = 0;
        while (num != 0)
        {
            n += pow(num % 10, 2);
            num /= 10;
        }
        //cout<<n<<endl;
    }

    if (flag == 2)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
