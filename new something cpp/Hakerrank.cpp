/*Bismillah Hir Rahmanir Rahim */
#include<bits/stdc++.h>
using namespace std;
int num(char str[],int x){
int i,j;
int c;
for(i=0;i<x;i++)
    if(str[i]=='h'&& str[i]=='a'&& str[i]=='c'&&str[i]=='k'&& str[i]=='e'&& str[i]=='r'&& str[i]=='r'&& str[i]=='a'&&str[i]=='n'&& str[i]=='k')
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
int main(){
   freopen("input.txt","r",stdin);
int n;
cin>>n;
while(n--){
        char str[100004];
cin>>str;
//for(int i=0;i<strlen(str);i++){
    if(str=='h'&& str=='a'&& str=='c'&&str=='k'&& str=='e'&& str=='r'&& str=='r'&& str=='a'&&str=='n'&& str=='k')
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}


}

