#include<iostream>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  v.push_back(i);
  int count=0,i,j;
  for(i=0;i<n;i++)
  {
    int sum=0;
    for(j=0;j<i;j++)
    {
      sum += v[j];
    }
    if(sum==2*k)
    if(count<)
  }
}
