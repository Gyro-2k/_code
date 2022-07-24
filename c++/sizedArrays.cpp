#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<vector<int>> varArray;
    int q;
    cin>>q;
    while(t--){
        int nums,store;
        cin>>nums;
        vector<int> line;
        while(nums--){
            cin>>store;
            line.push_back(store);
        }
        varArray.push_back(line);        
    }
    
    while(q--){
        int one,two;
        cin>>one>>two;
        cout<<varArray[one][two]<<endl;
    }
    return 0;
}
