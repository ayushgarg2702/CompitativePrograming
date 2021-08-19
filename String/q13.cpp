// Lognest Repeating subsequence
#include<bits/stdc++.h>
using namespace std;

// void desc(const unordered_map<string, int> &a,const unordered_map<string, int> &b){
//     return (a.second > b.second);
// }

string LongstRepeatingSubSequence(string str){
    if(str.size() <= 1){
        return str;
    }
    map<string, int> arr;
    string a = "";


    for(int i = 0; i < str.size(); i++){
        a = "";
        for(int j = i; j < str.size(); j++){
            a += str[j];
            if(arr.find(a) == arr.end()){
                arr.insert(pair<string, int>(a,1));
                // arr[a] = 1;
            }
            else{
                // cout<<arr[a]<<" "<<a<<" \n";
                arr[a] = arr[a] + 1;
            }
        }

    }
    int count = 0;
    string ans = "";
    // sort(arr.begin(), arr.end());
    map<string, int>::iterator itr;
    for(itr = arr.begin(); itr != arr.end(); itr++){
        if(count <= itr->second){
            count = itr->second;
            if(count == itr->second){
                if(ans.size() < (itr->first).size()){
                    ans = itr->first;
                }
            }
            else{
                    ans = itr->first;
            }
        }
        // cout<< itr->first <<" "<< itr->second <<" \n";
    }
    

    return ans;
}


int main(){
    string str = "ayaygyayayaysday";
    // ygyayagyaysdasy
    cout<<LongstRepeatingSubSequence(str);

    return 0;
}