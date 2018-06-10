#include<bits/stdc++.h>
using namespace std;
int x[9],tc,a,b,lineCouter;
bool place(int queen,int row){
for(int prev = 1;prev<=queen-1;prev++)
    if(x[prev]==row|| (abs(x[prev]-row)==abs(prev-queen))) return false;
return true;
}
void NQueen(int queen){
for(int row=1;row<=8;row++)
if(place(queen,row)){
    x[queen]=row;
    if(queen==8 && x[b]==a){
        cout<<fixed<<setprecision(2)<<++lineCouter<<" ";
        cout<<x[1]<<endl;
        for(int j=2;j<=8;j++) cout<<x[j];
        cout<<"\n";
    }
    else
        NQueen(queen +1);
}
}
int main(){
    cin>>tc;
    while(tc--){
        cin>>a>>b;
        memset(x,0,sizeof x);
         lineCouter =0;
        cout<<"SOLON    COLUMN"<<endl;
        cout<<" #    1 2 3 4 5 6 7 8\n\n"<<endl;
        NQueen(1);
        if(tc) cout<<"\n";
    }

return 0;
}
