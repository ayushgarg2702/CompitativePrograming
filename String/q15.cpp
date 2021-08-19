// Permutations of a given string 
#include<bits/stdc++.h>
using namespace std;

void PrintPermutation(string str, int l, int r){
    if(l == r){
        cout<<str<<" ";
        return;
    }
    for(int i = l; i <= r; i++){
        swap(str[l],str[i]);
        PrintPermutation(str, l+1, r);
        swap(str[l],str[i]);
    }
    return;
}

// Second method
void printPermutation(string str, string ans){

    if(str.length() == 0){
        cout<<ans<<" ";
        return;
    }

    for(int i = 0; i< str.length(); i++){

        char a = str[i];
        string l_substring = str.substr(0,i);
        string r_substring = str.substr(i+1);
        string s = l_substring + r_substring;
        printPermutation(s, ans + a);
    }

    return;

}


int main(){
    string str = "ABC";
    // PrintPermutation(str , 0 , str.size() - 1);
    printPermutation(str , "");


    return 0;
}