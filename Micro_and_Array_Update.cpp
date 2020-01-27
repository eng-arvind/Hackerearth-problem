#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int *min=min_element(a,a+n);
    if(k>*min)
    cout<<k-*min<<endl;
    else
    cout<<0<<endl;
  }
  return 0;
}
