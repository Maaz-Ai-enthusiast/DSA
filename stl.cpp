#include<iostream>
#include<bits/stdc++.h>
#include <array>
#include<vector>
using namespace std;
int main(){

vector<int> v;

cout<<"Capacity  : "<<v.capacity()<<endl;
cout<<"Size  : "<<v.size()<<endl;

v.push_back(1);
cout<<"Capacity  : "<<v.capacity()<<endl;
cout<<"Size  : "<<v.size()<<endl;

v.push_back(2);
cout<<"Capacity  : "<<v.capacity()<<endl;
cout<<"Size  : "<<v.size()<<endl;

v.push_back(3);
cout<<"Capacity  : "<<v.capacity()<<endl;
cout<<"Size  : "<<v.size()<<endl;



/*

front(): Directly accesses the first element.
begin(): Provides an iterator to the first element.
end(): Provides an iterator just past the last element.
back(): Directly accesses the last element.

*/ 




cout<<"Checking 1st element : "<<v.front()<<endl;
cout<<"Checking Last element : "<<v.back()<<endl;
cout<<"element at specific index :"<<v.at(2)<<endl;
vector<int> v_2(v);
cout<<"element at specific index :"<<v_2.at(2)<<endl;

v.pop_back();

for(int i:v){
 cout<<i<<endl;
}

v.clear();

cout<<"After clearing whole vector its capacity is : "<<v.capacity()<<endl;

cout<<"After clearing whole vector its size is  : "<<v.size()<<endl;











    // arrays

// array<int,4>nums={1,2,3,4};
// cout<<nums.size()<<endl;
// cout<<"Element at 2 index is "<<nums.at(2)<<endl;
// cout<<"Empty or not "<<nums.empty()<<endl;
// cout<<"First element is "<<nums.front()<<endl;
// cout<<"Last element is "<<nums.back()<<endl;

// for(int i:nums){
//     cout<<i<<endl;
// }


return 0;
}