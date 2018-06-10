#include<bits/stdc++.h>
using namespace std;
int main()
{

int number_count;
cin>>number_count;
vector<int>numbers(number_count);
for(auto& number : numbers)
{
    cin>>number;
}
sort(numbers.begin(),numbers.end());

for(auto number : numbers)
{
    cout<<number;


}
cout<<numbers[0]<<" "<<numbers[numbers.size()-1];
}
