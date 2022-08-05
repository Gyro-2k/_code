#include<bits/stdc++.h>
using namespace std;

//  B)  B:|
int main() { 
    int n;
    cin>>n;
    vector<int> nums;
    int store;
    while(n--){
        cin>>store;
        nums.push_back(store);
    }
    sort(nums.begin(),nums.end());
    for(auto x:nums){
        cout<<x<<" ";
    }
    return 0;
}
