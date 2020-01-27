#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n,K;
  cin>>n>>K;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            ll product = 1;
            for (int x = i; x <= j; x++)
                product *= arr[x];
            if (product % K == 0)
                count++;
        }
    }
    cout<<count<<endl;
        return 0;
}
