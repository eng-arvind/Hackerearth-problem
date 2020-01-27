#include<iostream>
using namespace std;
bool isprime(int k)
{
  for(int j=2;j<k/2+1;j++)
    if (k%j==0)
        return false;
    else
    return true;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int j=0;j<n;j++)
  cin>>a[j];
  int sum=0;
  int i;
  for(i=n;i>=1;i--)
  {
    if(isprime(i))
     break;
  }
  for(int j=0;j<i;j++)
  sum += a[j];
  cout<<sum<<endl;
  return 0;
}
