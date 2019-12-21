#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  string s1,s2;
  cin>>s1>>s2;
  int count[26]={0};
  for(int i=0;s1[i]!='\0';i++)
  count[s1[i]-'a']++;
  for(int i=0;s2[i]!='\0';i++)
  count[s2[i]-'a']--;
  int r=0;
  for(int i=0;i<26;i++)
  r += abs(count[i]);
  cout<<r<<endl;
  return 0;
}
}
