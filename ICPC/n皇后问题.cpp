#include <bits/stdc++.h>
using namespace std;

int a[15], check[3][30] = {0};
int ans[15], n, k, cnt;

void solve(int n)
{
	if(k == n+1)
	{
		cnt++;
		return;
	}
	for(int i = 1; i <= n; i++)
    {
    	a[k] = i;
        if((!check[0][i])&&(!check[1][k+i])&&(!check[2][k-i+n]))
        {
            check[0][i] = 1; check[1][k+i] = 1; check[2][k-i+n] = 1;
            k++;
            solve(n);
            k--;
            check[0][i] = 0; check[1][k+i] = 0; check[2][k-i+n] = 0;
        }
    }
}
int main()
{
	for(int i = 1; i <= 10; i++)
	{
		cnt = 0;
		k = 1;
		solve(i);
		ans[i] = cnt;
	}
	while(cin >> n && n)
	{
		cout << ans[n] << endl;
	}
}
