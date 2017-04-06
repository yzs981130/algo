#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
using namespace std;
#define MAXN 14
int x[MAXN];
int n, ans = 0;
bool check(int p)
{
	for (int i = 1; i < p; i++)
		if ((abs(x[i] - x[p]) == abs(i - p)) || (x[i] == x[p])) 
			return false;
	return true;
}
void DFS(int p)
{
	if (p > n)
	{
		ans++;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		x[p] = i;
		if (check(p))			
			DFS(p + 1);
	}
}
int main()
{
	cin >> n;
	DFS(1);
	cout << ans << endl;
	system("pause");
	return 0;
}