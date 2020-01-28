#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int arr[3];
	    arr[0]=a;
	    arr[1]=b;
	    arr[2]=c;
	    sort(arr,arr+3);
	    cout<<arr[1]<<endl;
	    }
	return 0;
}
