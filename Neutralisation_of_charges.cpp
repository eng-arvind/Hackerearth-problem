#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(t) int t; cin>>t; while(t--)
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      ll n;
     cin>>n;
     string s;
     cin>>s;
     stack<char> stk;
    for(ll i=0;i<s.length();i++)
    {
      char c=s[i];
      if(stk.empty()==true)
      stk.push(c);
      else
      {
        if(c==stk.top())
        stk.pop();
        else
        stk.push(c);
      }
    }
    string s1;
    while (!stk.empty())
     {
         s1+=stk.top();
         stk.pop();
     }
    cout<<s1.length()<<endl;
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;
    cout<<endl;
    return 0;
  }
