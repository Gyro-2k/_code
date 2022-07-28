//  B)  B:|

#include<bits/stdc++.h>
using namespace std;

int main() { 
    int n;
    cin>>n;
    int arr[n];
    for(int z=0;z<n;z++){
        cin>>arr[z];
    }
    reverse(arr,arr+n);
    for(int z=0;z<n;z++){
        cout<<arr[z]<<" ";
    }
    return 0;
}
