// Find the occarance of word in a string which is more than 1

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    // cout<<str;
    map<string, int> map_str;
    vector<string> vector_str;
    string str2 = "";

    for(int i = 0; i<str.size();i++){
        if(str[i] == ' '){
            vector_str.push_back(str2);
            str2= "";
        }
        else if(str[i] == '.'){
            continue;
        }
        else{
            str2 += str[i];
        }
    }
    
    vector_str.push_back(str2);

    vector<string>::iterator itr;

    for(itr = vector_str.begin();itr!=vector_str.end();itr++){
        string str3 = *itr;
        map<string, int>::iterator map_itr = map_str.find(str3);
        if(map_itr == map_str.end()){
            map_str.insert(pair<string, int>(*itr,1));
        }
        else{
            map_str.find(*itr)->second=map_str.find(*itr)->second+1;
        }

        // cout<<*itr<<" ";
    }
    // Count
    map<string, int>::iterator map_it;
    for(map_it = map_str.begin();map_it != map_str.end();map_it++){
        if(map_it->second > 1)
            cout<<map_it->first<<" "<<map_it->second<<endl;
    }

// string str4 = "ayush";
// itr = std::find(vector_str.begin(),vector_str.end(),str4);
// cout<<*itr;    

//     return 0;
// }