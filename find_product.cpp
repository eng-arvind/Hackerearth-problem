#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  long long int answer=1;
  for(long long int i=0;i<n;i++)
  {
    int k;
    cin>>k;
    answer=(answer*k)% int(pow(10,9)+7);
  }
  cout<<answer<<endl;
  return 0;
}
