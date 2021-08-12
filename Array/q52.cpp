// find the maximum sum of circular sub array
#include<bits/stdc++.h>
using namespace std;


int main(){
    // int arr[] = {1,2,-3,5,-6,2,5};
    int arr[] = {3,-4,5,6,-8,7};

    int size = sizeof(arr) / sizeof(int);

    int p[size];
    p[0] = arr[0];
    for(int i = 1; i<size;i++){
        p[i] = max(arr[i],arr[i]+p[i-1]);
    }

    // for(int i = 0; i<size; i++)
    //     cout<<p[i]<<" ";

    int ans = p[0];

    for(int i = 1; i< size;i++)
        ans = max(ans,p[i]);

    int p_r[size];
    int t =0;
    for(int i = 0; i<size;i++){
        t += arr[i];
        arr[i] = -arr[i];
    }

    p_r[0] = arr[0];
    for(int i = 1;i<size;i++)
        p_r[i] = max(arr[i], p_r[i-1] + arr[i]);

    int ans2 = p_r[0];

    for(int i= 1; i <size;i++){
        ans2 = max(ans2, p_r[i]);
    }
    ans2 = t + ans2;
    // cout<<ans<<" "<<ans2<<endl;
    if(ans>ans2)
        cout<<ans;
    else
        cout<<ans2;
    return 0;
}