#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int count=0;
    if(n*(n-1)>n)
    cout<<n<<endl;
    else
    {
      int i=k,sum1=0;
     while(1)
     {
       int sum=0;
       for(int j=0;j<k;j++)
       sum=sum+(i+j);
       if(sum<n)
       {
         sum1=sum;
         i++;
        }
       else
       {
        cout<<n-sum1<<endl;
        break;
       }
       }
     }
  }
  return 0;
}
