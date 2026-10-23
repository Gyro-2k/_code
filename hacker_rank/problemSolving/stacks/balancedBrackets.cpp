//check if a string has balanced brackets

//  B)  B:|
string isBalanced(string s) {
    string ans="YES";
    stack<char> stkk;
    for(int z=0;z<s.size();z++){
        if(s[z]=='{' || s[z]=='(' || s[z]=='['){
            stkk.push(s[z]);
        }
        else if(stkk.empty()){
            ans="NO";
            break;
        }
        else if(s[z]=='}'){
            if(stkk.top() == '{'){
                stkk.pop();
            }
            else{
                ans="NO";
                break;
            }
        }
        
        else if(s[z]==')'){
            if(stkk.top()=='('){
                stkk.pop();
            }
            else{
                ans="NO";
                break;
            }
        }
        else {
            if(stkk.top()=='['){
                stkk.pop();
            }
            else{
                ans="NO";
                break;
            }
        }
    }
    if(!stkk.empty()){
        ans="NO";
    }
    // cout<<"endone"<<endl;
    return ans;
}
