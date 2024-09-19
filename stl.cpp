#include<iostream>
#include<bits/stdc++.h>
#include <array>
using namespace std;
int main(){

array<int,4>nums={1,2,3,4};
cout<<nums.size()<<endl;
cout<<"Element at 2 index is "<<nums.at(2)<<endl;
cout<<"Empty or not "<<nums.empty()<<endl;
cout<<"First element is "<<nums.front()<<endl;
cout<<"Last element is "<<nums.back()<<endl;

for(int i:nums){
    cout<<i<<endl;
}


return 0;
}