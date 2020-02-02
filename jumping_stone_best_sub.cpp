#include<stdio.h>
#include<iostream>
using namespace std;
long long a[1000001], b[1000001];
int main()
{
    long long n, k, i, j, s;
    cin>>n>>k;
    a[0]=b[0]=0;
    a[1]=0;
    b[1]=0;
    for(i=2; i<=n; i++)
    {
        s=b[i-1];
        if(i-k>1)
        s=(s-b[i-k-1]+1000000007)%1000000007;
        else
        s=(s+1)%1000000007;

        a[i]=s;


        b[i]=(b[i-1]+a[i])%1000000007;
    }
    cout<<a[n];
    return 0;
}
