// Pattern matching better approach (KMP algo)
#include<bits/stdc++.h>
using namespace std;

void LPS(string str, int arr[]){
    int size = str.size();
    arr[0] = 0;
    int start = 0,index = 1;
    while(index < size){
        if(str[index] == str[start]){
            start++;
            arr[index] = start;
            index++;
        }
        else{
            if(start == 0){
                arr[index] = 0;
                index++;
            }
            else{
                start = arr[start - 1];
            }
        }
    }
}


bool PatternMatch(string str, string pattern){
    if(str.size() < pattern.size())
        return false;

    
    int arr[pattern.size()];
    LPS(pattern, arr);

    int j = 0;
    // for(int i = 0; i < str.size(); i++){
    //     int temp_i = i;
    //     for(; j < pattern.size();){
    //         if(str[temp_i] == pattern[j]){
    //             temp_i++;
    //             j++;
    //         }
    //         else{
    //             j = arr[j];
    //             break;
    //         }
    //     }
    //     if(j == pattern.size()){
    //         return true;
    //     }
    // }
    int i = 0;
    while( i < str.size()){
        if(str[i] == pattern[j]){
            i++;
            j++;
        }
        if(j==pattern.size()){
            return true;
            j = arr[j-1];
        }
        else if(i < str.size() && pattern[j] != str[i]){
            if(j!=0){
                j = arr[j-1];
            }
            else{
                i++;
            }
        }
    }

    return false;
}




int main(){
    string str = "AyushGargIsNotAYUSH";
    string pattern1 = "IsNot";
    string pattern2 = "NotFound";

    cout<<"Pattern 1 "<<PatternMatch(str, pattern1);
    cout<<"\nPattern 2 "<<PatternMatch(str, pattern2);



    return 0;
}
