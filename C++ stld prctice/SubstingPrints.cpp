#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    string n;
    cin>>n;
string toCheck(n);
//find all substring
vector<string>substring;
for(size_t i=0;i<=toCheck.size();i++)
for(size_t j=i;j<=toCheck.size();j++)
substring.push_back(toCheck.substr(i,j-i));

//sort the substring alphabetiucal-> step is requred for the unique algoritms
sort(substring.begin(), substring.end());
//eleminate duplicates
vector<string>::iterator it;
it=unique(substring.begin(),substring.end());
substring.resize(distance(substring.begin(),it));

//answer

cout<<substring.size()<<endl;

//sanity check -print all unique substrings elemennts

for(size_t i=0;i<=substring.size();i++)
cout<<'"'<<substring[i]<<'"'<<endl;

return 0;



}
