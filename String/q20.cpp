// Parenthesis Checker
#include<bits/stdc++.h>
using namespace std;

void checkParanthesis(string str){
    stack<char> Parenthesis;
    map<char, char> pre_p;
    char ch;
    pre_p['['] = ']';
    pre_p['('] = ')';
    pre_p['{'] = '}';
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '[' || str[i] =='(' || str[i]=='{'){
            Parenthesis.push(str[i]);
        }
        else{
            if(!Parenthesis.empty()){
                ch = Parenthesis.top();
                Parenthesis.pop();
            }
            else{
                cout<<"false"<<endl;
                return;
            }
            if(pre_p[ch] != str[i]){
                cout<<"false"<<endl;
                return;
            }
        }
    }
    if(Parenthesis.empty())
        cout<<"true"<<endl;
    else{
        cout<<"false"<<endl;
        return;
    }
    

}



int main(){
    string str1 = "{([])}";
    string str2 = "{([]){]}";
    string str3 = "{([])";
    
    checkParanthesis(str1);
    checkParanthesis(str2);
    checkParanthesis(str3);


    return 0;
}