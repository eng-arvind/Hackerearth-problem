#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  int n;
  cin>>n;
  int a[1000];
  int i = 0;
   while (n > 0)
   {
       a[i] = n % 2;
       n = n / 2;
       i++;
    }
    int num=0;
    for(int j=0;j<i-1;j++)
    {
      num += 1*int(pow(2,j));
    }
    cout<<num<<endl;
  }
    return 0;
}
