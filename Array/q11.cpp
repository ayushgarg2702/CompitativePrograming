// Find duplicate in an array of N+1. Only single element is dublicated
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(int nums[],int size) {
        sort(nums,nums+size);
        int start = 0;
        int end = size-1;
        int mid = start + int((end -start)/2);
        int output = find(nums, size, start, mid, end);
        return output;
    }
    int find(int nums[], int size, int start, int mid, int end){
        if(nums[mid]==mid){
            if(nums[mid+1]==mid){
                return nums[mid];}

            start = mid+1;
            mid = start + int((end -start)/2);
            return find(nums, size, start, mid, end);
        }
        else{
            end = mid-1;
            mid = start + int((end -start)/2);
            return find(nums, size, start, mid, end);
    
        }
    }
};

int main(void){
    int v1[] = {2,1,1,4,3,0,5,6};
    int size = sizeof(v1)/sizeof(int);

    Solution obj;
    int output = obj.findDuplicate(v1,size);
    cout << output; 
    return 0;
}