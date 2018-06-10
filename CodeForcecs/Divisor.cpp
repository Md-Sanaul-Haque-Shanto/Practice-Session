#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,outn=0,inou=0;
cin>>n;
for(int i=0;i<n;i++)
{
    int s[i];
    cin>>s[i];
    if(s[i]>10||s[i]<20)
    {
        inou++;
    }
    else
    {
        outn++;
    }

}
cout<<inou<<"In"<<endl;
cout<<outn<<"Out"<<endl;
}
