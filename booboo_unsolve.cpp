#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int maxprob=n/m;
  int time=0;
  for(int i=0;i<n;i++)
  {
    int ctime=0;
    for(int j=i;j<i+maxprob;j++)
    {
      ctime += a[j];
    }
    if(time<ctime)
    time=ctime;
  }
  cout<<time<<endl;
  return 0;
}
