// Merging patter
#include<bits/stdc++.h>
using namespace std;

bool second_element(const pair<int, int> &a, const pair<int, int> &b){
    return (a.second < b.second);
}


int main(){
    // vector<pair<int,int>> arr;
     vector<pair <int, int> > arr;

    arr.push_back(make_pair(3,7));
    arr.push_back(make_pair(4,8));
    arr.push_back(make_pair(1,7));
    arr.push_back(make_pair(1,3));
    arr.push_back(make_pair(9,15));
    arr.push_back(make_pair(10,10));

    sort(arr.begin(), arr.end(), second_element);
    sort(arr.begin(),arr.end());

    // vector<pair <int, int> > it;
    // it = arr.begin();
    for(int i =1; i< arr.size();i++){
        if(arr[i].first < arr[i-1].second && arr[i].first >= arr[i-1].first){
            arr[i-1].second = max(arr[i].second, arr[i-1].second);
            // it = arr[i];
            arr.erase(arr.begin() + i);        
            i--;    
        }
        // cout<<arr[i].first<<" ";
    }


    vector<pair<int, int> >::iterator itr;
    for(itr = arr.begin(); itr!= arr.end();itr++){


        cout<< itr->first <<" "<< itr->second <<"\n";
    }


    return 0;
}



