// Count the Reversals
// }}}{{{
// }}}}{{{{


// 
// }}}}}}{}{}}}{{}}}}{}}{{{}{}{}{}}{{{{}}}{}}
// 16{{{}{}{}{}}5
// 
// 
// 
// 
#include<bits/stdc++.h>
using namespace std;

int count_conversion(string str){
    int size = str.length();
    if(size % 2 != 0){
        return -1;
    }
    int start = 0;
    int end = size-1;
    int l_count = 0, r_count = 0;
    while(start <= end){
        if(str[start]=='{'){
            l_count++;
        }
        else{
            if(l_count == 0)
                r_count++;
            else
                l_count--;
        }
        start++;
    }
    return ceil(l_count/2)+ceil(r_count)/2;
}

int main(){
    string str = "}}{{";
    // string str = "}}}}}}";

    cout<< count_conversion(str);

    return 0;
}