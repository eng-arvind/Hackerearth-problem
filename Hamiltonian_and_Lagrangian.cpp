#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  vector<int> v;
  for(long int i=0;i<n;i++)
  {
    long int a;
    cin>>a;
    v.push_back(a);
  }
  for(int i=0;i<n-1;i++){
  long cnt=0;
  for(int j=i+1;j<n;j++)
  {
  if(v[i]>=v[j])
  cnt++;
  else
  break;
  }
  if(cnt==(n-i-1))
  cout<<v[i]<<" ";
  }
  cout<<v[n-1];
  return 0;
}
