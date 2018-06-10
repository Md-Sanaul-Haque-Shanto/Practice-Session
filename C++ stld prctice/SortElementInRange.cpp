#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool myfunction(int i,int j) {return (i<j);}
int main()
{
vector<int>myvector;

//set some value

for(int i=1;i<10;i++) myvector.push_back(i);

random_shuffle(myvector.begin(),myvector.end());

//using default comparism (oparetor< ):

nth_element(myvector.begin(),myvector.begin()+5,myvector.end());

//using function as comp
nth_element(myvector.begin(),myvector.begin()+5,myvector.end(),myfunction);

//print out the content

cout<<"My Vector Contents:";

for(vector<int>::iterator it=myvector.begin();it!=myvector.end();it++)

cout<<' '<<*it;
cout<<'\n';

return 0;

}
