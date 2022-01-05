
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (a < b)
		return gcd(b, a);

	if (b == 0)
		return a;

	else
		return gcd(b, a % b);
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("ooo.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int arr[n];
		for (int i = 0 ; i < n ; i++)
			cin >> arr[i];

		int hcf = arr[0];
		for (int i = 1 ; i < n; i++)
			hcf = gcd(hcf, arr[i]);

		cout << hcf << endl;

	}


	return 0;
}