#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(n) for (int i = 1; i < n; i++)

string intToRoman(int num)
{
    int n = num, x;
    unordered_map<int, char> u;
    u[1] = 'I';
    u[5] = 'V';
    u[10] = 'X';
    u[50] = 'L';
    u[100] = 'C';
    u[500] = 'D';
    u[1000] = 'M';
    string s = "", stemp = "";
    int l = 0, j, rem;
    while (n != 0)
    {
        x = n % 10;
        stemp = "";
        x = x * (pow(10, l));
        if (x == 9 * (pow(10, l)))
        {
            stemp += u[pow(10, l)];
            stemp += u[pow(10, l + 1)];
            l++;
            n = n / 10;
            reverse(stemp.begin(), stemp.end());
            s = s + stemp;
            continue;
        }
        if (x >= 5 * pow(10, l))
        {
            stemp += u[5 * pow(10, l)];
            x = x - 5 * pow(10, l);
        }

        rem = x / pow(10, l);
        if (rem == 4)
        {
            stemp += u[pow(10, l)];
            stemp += u[5 * pow(10, l)];
        }
        else
        {
            for (j = 0; j < rem; j++)
                stemp += u[pow(10, l)];
        }
        l++;
        n = n / 10;
        reverse(stemp.begin(), stemp.end());
        s = s + stemp;
    }

    //cout<<s<<endl;
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
