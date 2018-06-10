#include<bits/stdc++.h>
using namespace std;
long long gcd(long long int a,long long int b)
    {
        return b==0?a:gcd(b,a%b);
    }

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

int main()
{
    int a,b,c,d,e;
   while(cin>>a>>b>>c>>d>>e){
    cout<<gcd(gcd(gcd(gcd(a,b),c),d),e)<<endl;
     cout<<lcm(lcm(lcm(lcm(a,b),c),d),e)<<endl;
}
}
