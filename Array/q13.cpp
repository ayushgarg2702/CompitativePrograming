// Kadne's algo largest comman subaray sum
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(void){
    vector<int> v;
    v.push_back(5);
    v.push_back(-3);
    v.push_back(3);
    v.push_back(-1);
    v.push_back(2);
    int max_sum = 0,sum=0;
    int size = 0;
    vector<int>:: iterator it;
    for(it = v.begin(); it != v.end();it++){
        size++;
    }
    for(int i = 0; i < size; i++){
        // cout<<v[i]<<" ";
        if((max_sum+v[i])>0){
            max_sum = max_sum+v[i];
            sum = max(sum,max_sum);
        }
        else{
            max_sum = 0;
        }
    }
    cout<<sum;
    return 0;
}