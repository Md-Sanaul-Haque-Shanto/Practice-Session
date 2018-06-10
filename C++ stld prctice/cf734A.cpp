#include<iostream>
#include<string>
using namespace std;
int main()
{
    char str[100];
    int n,i,anton=0,danik=0;

   cin>>n;
    for(i=0; i<n; i++)
    {
        if(str[i]=='A' )
            anton++;
        else if(str[i]=='D')
            danik++;
    }
    if(anton>danik)
        cout<<"Anton";
    else if(anton<danik)
        cout<<"Danik";
    else if(anton==danik)
        cout<<"Friendship";
    return 0;

}
