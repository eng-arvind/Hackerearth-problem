#include<iostream>
using namespace std;
int  main()
{
    int n;
    cin>>n;
    if(n==2)
    {
      cout<<"0";
      exit(0);
    }
    for(int i=2;i<n;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        cout<<i<<" ";
    }
}
