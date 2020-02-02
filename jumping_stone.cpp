#include<bits/stdc++.h>
#define ll long long
//#define pb push_back
//#define mp make_pair
//#define ff first
//#define ss second
using namespace std;
int main()
{
long long n,k,i,j,p,s=0,sum;
cin>>n>>k;
if(k>n)
k=n;
long long dp[n+1]={0};
//memset(dp,0,sizeof(dp));
dp[0]=1;
dp[1]=1;
dp[2]=2;
for(i=3;i<n+1;i++)
{sum=0;
for(j=1;j<=k;j++)
{
if(i-j<0)
break;
sum=(sum+dp[i-j])%1000000007;
}
dp[i]=sum;
}
cout<<dp[n-1]%1000000007;
}
