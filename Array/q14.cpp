// Merge overlapping intervals
#include <bits/stdc++.h>
#include<vector>
using namespace std;
bool sortcol1( const vector<int>& v1,const vector<int>& v2 ) { 
    return v1[1] < v2[1];
}
bool sortcol0( const vector<int>& v1,const vector<int>& v2 ) { 
    return v1[0] < v2[0];
}
int main(void){
    vector<vector<int> > v; 
    vector<int> v1;

    v1.push_back(4);
    v1.push_back(8);
    v.push_back(v1);
    v1.clear();

    v1.push_back(10);
    v1.push_back(11);
    v.push_back(v1);
    v1.clear();

    v1.push_back(8);
    v1.push_back(9);
    v.push_back(v1);
    v1.clear();

    sort(v.begin(), v.end(),sortcol1);
    sort(v.begin(), v.end(),sortcol0);
    int m,n;
    vector<int> :: iterator it;
    // for(int i = 0;i < v.size();i++){
    //     for(it = v[i].begin();it != v[i].end();it++){
    //         cout<<*it<<" ";
    //     }
    // }
    // cout<<endl;
    for(int i = 0;i < v.size();i++){
        if(i==0){
            m = v[i][0];
            n = v[i][1];
        }
        else{
            if(v[i][0]<=n){
                v[i][0] = m;
                v[i-1].pop_back();
                v[i-1].pop_back();
                n = v[i][1]; 
            }
            else{
                m = v[i][0];
                n = v[i][1];
            }
        }
    }

    for(int i = 0;i < v.size();i++){
        for(it = v[i].begin();it != v[i].end();it++){
            cout<<*it<<" ";
        }
    }
    return 0;
}