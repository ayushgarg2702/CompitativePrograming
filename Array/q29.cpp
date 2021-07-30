// Tapping water
#include <bits/stdc++.h>
using namespace std;



int main(void){
    int arr[] = {3, 0, 2, 0, 4};
    int size = sizeof(arr) / sizeof(int);
    int maxWall = *max_element(arr,arr+size);
    int countZero = 0;
    int number = 0;
    int ans = 0;
    int lhighest = 0, rhighest = 0;
    for(int i = 0; i < size; i++){
        cout<<ans<<" ";
        if(arr[i] == 0){
            countZero++;
            continue;
        }
        rhighest = *max_element(arr+i,arr+size);

        if((lhighest == arr[i] && rhighest == maxWall) || (rhighest == arr[i] && lhighest == maxWall)){
            continue;
        }
        int t = (min(lhighest,rhighest));
        int t2 = t - arr[i];
        if (t2< 0){
            t2 = 0;
        }
        ans += countZero *t + t2;
        countZero = 0; 
        number = arr[i];
        if(lhighest < arr[i]){
            lhighest = arr[i];
        }
    }

    cout << ans;
    return 0;
}