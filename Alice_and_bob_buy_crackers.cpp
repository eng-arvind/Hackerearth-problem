#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int sum(vector<int> a, int l, int m)
{
	int sum = 0;
	for(int x=0;x<l;x++)
	sum += a[x];
	vector<vector<int> > dp(l + 1, vector<int>(sum + 1, 0));
	for (int i = 0; i <= l; i++)
		dp[i][0]++;
	for (int i = 1; i <= l; i++) {

		dp[i][a[i - 1]]++;
		for (int j = 1; j <= sum; j++) {

			if (dp[i - 1][j] > 0) {
				dp[i][j]++;
				dp[i][j + a[i - 1]]++;
			}
		}
	}
set<int> v;
	int count = 0;
	for (int j = 1; j <= sum; j++)
		if (dp[l][j] > 0)
			if (j % m == 0) {
				count += dp[l][j];
				v.insert(j);
			}

	return v.size();
}
int main()
{
    int n;
    cin>>n;
    int k=2;
    vector<int > a;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a.push_back(t);
    }
	cout << sum(a, n, k) << endl;
	return 0;
}
