#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
  int n,q;
  cin>>n>>q;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for (int i = 1; i <= q; i++)
   {
     int t;
     cin>>t;
         if (t==1)
         {
             int index;
             cin>>index;
             if(a[index]==0)
               a[index]++;
             else
              a[index]--;
         }
         else
         {
             int lIndex;
             cin>>lIndex;
             int rIndex;
             cin>>rIndex;
             if(a[rIndex-1]==0)
             cout<<"EVEN"<<endl;
            else
             cout<<"ODD"<<endl;
          }
}
return 0;
}
