/*Bismillah Hir Rahmanir Rahim
Md Sanaul Haque Shanto
OS:Manjaro-KDE version 10.15
problems: NHSPC 17 Rajshahi Regional C Ram,Rem and Flower Picking
*/
#include<bits/stdc++.h>
using namespace std;
 int main(){
    //freopen( "input.txt", "r", stdin);
    // freopen( "ouput.txt", "w", stdout);
 int t;cin>>t;
 while(t--){
    int n,n2,a2=0,a1=0,b2=0,b1=0,c2=0,c1=0;
    cin>>n;int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)a1++;
        if(a[i]==2)b1++;
        if(a[i]==3)c1++;
    }
    cin>>n2;int b[n2];
    for(int i=0;i<n2;i++){
        cin>>b[i];
         if(b[i]==1)a2++;
        if(b[i]==2)b2++;
        if(b[i]==3)c2++;
    }
    if(a1==a2)cout<<" Draw ";
    else if(a1!=a2){
        cout<<((a1<a2)?" Ram ":" Rem ");
    }
    if(b1==b2)cout<<" Draw ";
    else if(b1!=b2){
        cout<<((b1<b2)? " Ram ":" Rem ");
    }
    if(c1==c2)cout<<" Draw ";
    else if(c1!=c2){
        cout<<((c1<c2)? " Ram ":" Rem ");
    }
    cout<<endl;
 }

 };
