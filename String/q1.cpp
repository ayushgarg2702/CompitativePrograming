// Next largest lexicographically permutation for string
#include<bits/stdc++.h>
using namespace std;

void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}
void interchange(string &str,int l, int h){
    while(l<=h){
        swap(str[l++],str[h--]);
    }
}

string next_lexicographically_p(string &str){
    int len = str.length();
    int i = 0;
    for(i = len-2; i >=0 ;i--){
        if(str[i]<str[i+1]){
            break;
        }
    }
    if(i < 0){
        return "no answer";
    }
    else{
        int index;
        for(int j = len - 1; j > 0; j--){
            if(str[i]<str[j]){
                index = j;
                break;
            }
        }
        swap(str[i],str[index]);
        interchange(str,i+1,index);

    }
    return str;
}

int main(void){
    string str = "bdc";
    cout<< next_lexicographically_p(str);

    return 0;
}