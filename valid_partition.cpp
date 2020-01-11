#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  string s;
  cin>>s;
  int k;
  cin>>k;
  int l=s.length();
  if(l%k==0 || l%k==(k-1))
  {
  if(l>=(k+1)*(k-1))
  {
    int count=0;
    for(int i=0;i<s.length();i++)
    {
      if(count!=k)
      {
      cout<<s[i];
      count++;
      }
      else
      {
        cout<<"-";
        cout<<s[i];
        count=1;
      }
    }
    cout<<endl;
  }
  else
  cout<<"-1"<<endl;
  }
  else
  cout<<"-1"<<endl;
  }
  return 0;
}
