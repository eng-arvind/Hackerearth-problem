#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  int n;
 cin>>n;
 int r=n%12;
 if(r<=6)
 {
   if(r==0)
   n=n-11;
  else if(r==1)
   n=n+11;
   else if(r==2)
    n=n+9;
   else if(r==3)
   n=n+7;
   else if(r==4)
   n=n+5;
   else if(r==5)
   n=n+3;
   else if(r==6)
   n=n+1;
 }
 if(r>6)
 {
   if(r==7)
   n=n-1;
   else if(r==8)
   n=n-3;
   else if(r==9)
   n=n-5;
   else if(r==10)
   n=n-7;
   else if(r==11)
   n=n-9;
 }
 if(r==0|| r==1 || r==6 || r==7)
 cout<<n<<" "<<"WS"<<endl;
 else if(r==2 || r==5 || r==8 || r==11)
 cout<<n<<" "<<"MS"<<endl;
 else if(r==3 || r==4 || r==9 || r==10)
 cout<<n<<" "<<"AS"<<endl;
}
}
