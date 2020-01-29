#include<bits/stdc++.h>
using namespace std;

int main() {

ios::sync_with_stdio(0);
cin.tie(0);
int t,n;
cin>>t;
while (t--){
cin>>n;
unsigned long long int a[n],num_sub,charge = 0,m=1000000007,k=64;
if(n>=64)
{
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"0"<<"\n";
}
else{
num_sub=pow(2,n)/2;
for(int i=0;i<n;i++){
cin>>a[i];
if(a[i]>=num_sub)
charge = charge%m + a[i]%m;
}
cout<<charge%m<<"\n";
} 
}
}
