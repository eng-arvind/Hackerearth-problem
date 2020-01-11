#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int k=t;
  while(t--)
  {
    int g,p;
    cin>>g>>p;
    int n;
    cin>>n;
    int cost1=0,cost2=0;
    if(k%2==0)
    {
    for(int i=0;i<n;i++)
    {
      int a,b;
      cin>>a>>b;
      if(a==1)
      cost1=cost1+g;
       if(b==1)
      cost2=cost2+p;
    }
    k--;
  }
  else
  {
    for(int i=0;i<n;i++)
    {
      int a,b;
      cin>>a>>b;
      if(a==1)
      cost1=cost1+p;
       if(b==1)
      cost2=cost2+g;
    }
    k--;
  }
    cout<<cost1+cost2<<endl;
  }
  return 0;
}
