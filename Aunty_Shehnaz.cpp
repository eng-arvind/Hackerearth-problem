#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
    v.push_back(a);
    }
    int k;
    cin>>k;
    int num=v[k-1];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
      if(v[i]==num)
      {
        cout<<i+1<<endl;
        break;
      }
    }
  }
  return 0;
}
