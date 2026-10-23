//rotate the array by d elements
//  B)   B:|

vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> ans;
    for(int z=d;z<arr.size();z++){
        ans.push_back(arr[z]);
    }
    for(int z=0;z<d;z++){
        ans.push_back(arr[z]);
    }
    return ans;
}
