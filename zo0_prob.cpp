#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count1=0,count2=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='z')
        count1++;
        if(str[i]=='o')
        count2++;
    }
    if(count1*2==count2)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
