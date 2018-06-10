
#include<bits/stdc++.h>
using namespace std;
char c[20];
int main(){
    //freopen("input.txt", "r", stdin);
map<string,int>tree;
set<string>ss;
while(gets(c)){
    string s="";
    for(int i=0;c[i];i++){
    if(isalpha(c[i])) s+=toupper(c[i]);
    else s+=" ";
    }
    cout<<s<<endl;

    stringstream sin(s);
    string t;
    while(sin>>t){
        ss.insert(t);
   tree[t]++;
    }
}
cout<<"........................................."<<endl;
for(set<string>::iterator itt1=ss.begin(); itt1!= ss.end(); itt1++){
    cout<<*(itt1)<<endl;
}
cout<<" ........................................... "<<endl;
for(map<string, int>::iterator it=tree.begin();it!=tree.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}

return 0;
}

