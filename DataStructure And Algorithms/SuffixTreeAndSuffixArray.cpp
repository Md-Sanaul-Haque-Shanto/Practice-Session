/*Bismillah Hir Rahmanir Rahim*/
#include<bits/stdc++.h>
using namespace std;
char s[1001];
int sa[1001],n;
int sa_cmp(const void *a,const void *b){
return strcmp(s+*(int*)a,s+*(int*)b);
}
int main(){
n=strlen(gets(s));
for(int i=0;i<n;i++) sa[i]=i;
qsort(sa,n,sizeof(int),sa_cmp);
for(int i=0;i<n;i++) cout<<sa[i]<<" "<<s+sa[i]<<endl;
return 0;
}
