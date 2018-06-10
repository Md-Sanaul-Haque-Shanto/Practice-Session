//11942 - Lumberjack Sequencing uva

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[15],b,c=0,d,k,up,down;
 cout<<"Lumberjacks:"<<endl;
    while(cin>>n)
    {

        while(n--)
        {
            for(i=0;i<10;i++)
            {
                cin>>a[i];

            }
            up=a[0];
            down=a[1];
            if(up>down)
            {

                for(i=0;i<9;i++)
                {
                    if(a[i]>a[i+1])
                    {
                        c++;
                    }
                }
            }
            else if(up<down)
            {
                for(i=0;i<9;i++)
                {

                    if(a[i]<a[i+1])
                    {
                        c++;
                    }
                }
            }

            if(c==9)
            {
                cout<<"Ordered"<<endl;
            }
            else
                cout<<"Unordered"<<endl;
        }
    }


}
