// Generate all permutation of string
#include<bits/stdc++.h>
using namespace std;

void swap(char& a, char& b ){
    char t = a;
    a =b;
    b = t;
}

void generate_permutation(string str, int i){

    if(str.size()==i){
        cout<<str<<" ";
        return;
    }
    for(int j = i; j<str.size();j++){
        swap(str[i],str[j]);
        generate_permutation(str,i+1);
        swap(str[i],str[j]);
    }
}

void generate_subString(string str,string str2, int i){
    if(i == str.size()){
        cout<<str2<<" ";
        return;
    }
    generate_subString(str,str2,i+1);
    generate_subString(str,str2+str[i],i+1);

}

int main(){
    string str = "ABC";

    generate_permutation(str,0);
    cout<<endl;
    generate_subString(str,"",0);
    return 0;
}