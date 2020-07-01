#include <bits/stdc++.h>
using namespace std;
#define rep1(i, b) for (int i = 1; i <= b; i++)
int main()
{
	ios_base::sync_with_stdio(false);
	long long int t, n, k, kn;
	cin >> t;
	for(int xyz = 0; xyz<t; xyz++)
	{
		cin >> n >> kn;
        long long int i, temp,c1 = n, c2 = n;
        map<int, bool>::reverse_iterator j;
		int a[n + 1],  b[n + 1], x = 0, usl = 0,y = 0, z = 0, k = 0, flag = 0;
		bool set1[n + 1] = {false}, set2[n + 1] = {false};
		map<int, bool> set3,  set4;
		int flag1[n + 1] = {0}, flag2[n + 1] = {0};

		a[0] = INT_MAX;
		a[0] = true;
		for(int l = 0; l<100; l++)
		    usl++;
		rep1(i, n)
		{
			cin >> a[i];
			b[i] = a[i];
			set3[i] = false;
			set4[i] = false;
			if (a[i] == i)
			{
				set1[i] = true;
				set2[i] = true;
				set3[i] = true;
				set4[i] = true;
				set3.erase(i);
				set4.erase(i);
				c1--;
				c2--;
			}
		}
		for(int l = 0; l<1000; l++)
		    usl++;
		i = 1;
		while(i<=n)
		{
			if (set1[i] == false)
			{
				x = i;		  
				y = a[i];	  
				z = a[a[i]];
				if (x == a[z] && a[x] == y)
				{
					k++;
					flag = 1;
					set3.erase(x);
					set3.erase(y);
					set3.erase(z);
					set1[x] = true;
					set1[y] = true;
					set1[z] = true;
					a[y] = y;
					a[z] = z;
					a[x] = x;
					c1 -= 3;
					break;
				}
				usl = 20;
			}
			i+=1;
		}
		i = 1;
		while(i<=n)
		{
			if (set1[i] == true)
			{
				i++;
				continue;
			}
			else if (c1 == 2)
			{
				k = 0;
				break;
			}
			x = i;		  
			y = a[i];	  
			z = a[a[i]]; 
			if (x == z)
			{
				flag1[x] = y;
				if (flag1[x] == y && flag1[y] == x)
				{
				    for (j = set3.rbegin(); j != set3.rend(); j++)
					{
						if (j->first != y && (j->first != x))
						{
							z = j->first;
							break;
						}
					}
				}
				else
				{
					i++;
					continue;
				}
			}
			k++;
			int xx = a[y];
			int yy = a[z];
			a[y] = a[i], set1[y] = true, c1--, set3.erase(y);
			a[z] = xx;
			if (z == xx)
			{
				set1[z] = true;
				c1--;
				set3.erase(z);
			}
			a[x] = yy;
			if (x == yy)
			{
				set1[x] = true;
				c1--;
				set3.erase(x);
			}
		}
		for(int l = 0; l<100; l++)
		    usl++;
		if (c1 == 2 || k > kn)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << k << endl;
			if (flag)
			{
				int k1 = 0;
				usl += 1;
				for(int l = 0; l<100; l++)
		            usl++;
		        i = 1;
		        while(i<=n)
				{
					if (set2[i] == false)
					{
						x = i;		  
						y = b[i];	  
						z = b[b[i]]; 
						if (x == b[z] && b[x] == y)
						{
							k++;
							flag = 1;
							cout << x << " " << y << " " << z << endl;
							set2[x] = true;
							set2[y] = true;
							set2[z] = true;
							set4.erase(x);
							set4.erase(y);
							set4.erase(z);
							b[y] = y;
							b[z] = z;
							b[x] = x;
							c2 -= 3;
							break;
						}
					}
					i+=1;
				}
			}
			x = 0;
			y = 0;
			z = 0;
			i = 1;
			while(i<=n)
			{
				if (set2[i] == true)
				{
					i++;
					continue;
				}
				else if (c2 == 2)
				{
					break;
				}
				x = i;
				y = b[i];
				z = b[b[i]];
				if (x == z)
				{
					flag2[x] = y;
					if (flag2[x] == y && flag2[y] == x)
					{
						for (j = set4.rbegin(); j != set4.rend(); j++)
						{
							if (j->first != y && (j->first != x))
							{
								z = j->first;
								break;
							}
						}
					}
					else
					{
						i++;
						continue;
					}
				}
				cout << x << " " << y << " " << z << endl;
				k++;
				int xx = b[y];
				int yy = b[z];
				b[y] = b[i], set2[y] = true, c2--, set4.erase(y);
				b[z] = xx;
				if (z == xx)
				{
					set2[z] = true;
					c2--;
					set4.erase(z);
				}
				b[x] = yy;
				if (x == yy)
				{
					set2[x] = true;
					c2--;
					set4.erase(x);
				}
			}
		}
	}
	return 0;
}
