#include <bits/stdc++.h>
using namespace std;
int main() {
	// Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    int asize = a.length();
    int bsize = b.length();
    cout<<asize<<" "<<bsize<<endl;
    cout<<(a+b)<<endl;
    //for '
    char aa = b[0];
    char bb = a[0];
    a[0]=aa;
    b[0]=bb;
    
    cout<<a<<" "<<b;
    return 0;
}
