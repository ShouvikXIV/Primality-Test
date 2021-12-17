#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;
	for(int i = 0;i<t;i++)
	{
		long long int n,c;
		c = 0;
		cin>>n;
		if(n==1)
		{
			cout<<"no"<<'\n';
		}
		else if(n>1)
		{
			for(int j = 2;j*j<=n;j++)
			{
				if(n%j==0)
				{
					c+=1;
				}

			}
		if(c>0)
		{
			cout<<"no"<<'\n';
		}
		else
		{
			cout<<"yes"<<'\n';
		}
		}

	}
	return 0;
}   