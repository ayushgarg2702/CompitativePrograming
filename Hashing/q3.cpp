// Frequency of array element
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,4,5,2,1,4,5,2,3,5,1};
    int size = sizeof(arr) / sizeof(int);
    map<int, int> m_arr;

    for(int i = 0; i < size; i++){
        if(m_arr.find(arr[i]) == m_arr.end()){
            m_arr.insert(make_pair(arr[i],1));
        }
        else{
            m_arr[arr[i]] +=1;
        }
    }

    // for(int i = 0; i < m_arr.size(); i++){
    //     cout<<m_arr[i]<<" "<<"\n";
    // }

    map<int, int>::iterator itr;
    for(itr = m_arr.begin();itr != m_arr.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    return 0;
}