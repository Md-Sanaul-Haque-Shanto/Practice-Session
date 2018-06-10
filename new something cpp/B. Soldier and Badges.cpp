#include<iostream>
using namespace std;
int main()
{
    int n,temp,p,i,j,k,m;
    while(cin>>n)
    {
        int arr[n],cost=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[j]>arr[k])
                {
                    temp=arr[j];
                    arr[j]=arr[k];
                    arr[k]=temp;
                }
            }
        }
        for(m=0;m<n;m++)
        {
            if(arr[m]==arr[m+1])
            {
                arr[m+1]++;
                cost++;
            }
        }
        cout<<cost<<endl;
    }
}
