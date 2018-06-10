//piramid
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,ou=0,in=0;
cin>>n;
for(int i=0;i<n;i++)
{
    int a[i];
    cin>>a[i];
    if(a[i]>10||a[i]<20)
    {
        in++;
    }
    else ou++;


}
cout<<in<<endl;
cout<<ou<<endl;

    return 0;




}
