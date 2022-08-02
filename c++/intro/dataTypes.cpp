#include <bits/stdc++.h>
using namespace std;

int main() {
    // declaring variables
    int valInt;
    long valLong;
    char valChar;
    float valFloat;
    double valDouble;
    
    //taking Input
    cin>>valInt;
    cin>>valLong;
    cin>>valChar;
    cin>>valFloat;
    cin>>valDouble;
    
    // printing values
    cout<<valInt<<endl;
    cout<<valLong<<endl;
    cout<<valChar<<endl;
    cout<<fixed<<setprecision(3)<<valFloat<<endl;
    cout<<fixed<<setprecision(9)<<valDouble<<endl;
    return 0;
}
