#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  string s1=s;
  reverse(s.begin(),s.end());
  if(s1.compare(s)==0)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
  return 0;
}
