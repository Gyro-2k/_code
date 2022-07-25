#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	vector<string> breakString;
    stringstream allString(str);
    while(allString.good()){
        string getOne;
        getline(allString,getOne,',');
        breakString.push_back(getOne);
    }
    vector<int> giveInt;
    int toInt;
    string temp;
    for(auto x: breakString){
        temp = x;
        toInt = stoi(temp);
        giveInt.push_back(toInt);
    }
    return giveInt;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }  
    return 0;
}
