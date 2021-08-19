// convert a string in palindrome

#include<bits/stdc++.h>
using namespace std;

int make_pallindrome(string str){
    int size = str.size();
    if(size <= 1){
        return 0;
    }
    int count = 0;
    // cout<<str;
    int start = 0;
    int end = size -1;
    while(start < end){
        if(str[start] == str[end]){
            start++;
            end--;
        }
        else{
            int temp_end = end - 1;
            while(str[temp_end] != str[start] && start < temp_end){
                temp_end--;
            }
            if(temp_end <= start){
                return -1;
            }
            else{
                // cout<<str[temp_end]<<" "<<str[end]<<endl;
                swap(str[temp_end],str[end]);
                if((temp_end - end) == 1)
                   count += (end-temp_end);
                else
                    count += 2*(end-temp_end);
            }
        }
    }
    // cout<<count;
    return count;
}



int main(){
    string str1 = "AyAyu";
    string str2 = "AyAyus";
    cout<<make_pallindrome(str1)<<endl;
    cout<<make_pallindrome(str2);




    return 0;
}