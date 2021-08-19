// Word Break
#include<bits/stdc++.h>
using namespace std;

int dictionary_contins(vector<string> str1, string str2){
    if(find(str1.begin(), str1.end(), str2) != str1.end()){
        return 1;
    }
    return 0;

}

int CheckWordWrap(vector<string> str1, string str2, int n){
    // vector<string> itr = find(str1.begin(), str1.end(), str2);
    if(find(str1.begin(), str1.end(), str2) != str1.end()){
        return 1;
    }
    if(str2.size()< 1){
        return 1;
    }
    
    if(str2.size() == 1){
        return 0;
    }
    
    for(int i = 1; i< str2.size(); i++){
        int a = dictionary_contins(str1, str2.substr(0,i));
        // cout<<str2.substr(0,i)<<" ";
        // cout<<str2.substr(i)<<" \n";

        int b =CheckWordWrap(str1, str2.substr(i), n);
        if(a && b){
            return 1;
        }
    }
    return 0;
}


int main(){
    int n = 12;
    vector<string> str1{"i", "like", "sam",
        "sung", "samsung", "mobile",
        "ice","cream", "icecream",
        "man", "go", "mango" 
    };

    string str2 = "ilikeicemangoa";

    cout<< CheckWordWrap(str1, str2, n);


    return 0;
}