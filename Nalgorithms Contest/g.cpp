#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   double  num,s,y,factorial=1;
    cin>>num>>s;
    for(int i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }

    if (factorial/s==0)
    {
        cout<<s<<" divides "<<num<<"!"<<endl;
    }
   else

        cout<<s<<" does not divide "<<num<<"!"<<endl;

    return 0;
}
