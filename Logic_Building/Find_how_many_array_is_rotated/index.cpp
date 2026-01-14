#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int size=nums.size();
        
        int lower=0;
        int higher=size-1;

        if(nums[lower]<nums[higher]) return lower;

        while(lower<higher){
            int middle=lower+(higher-lower)/2;

            if(nums[middle]>nums[higher]){
                lower=middle+1;

            }
            else{
                higher=middle;
            }
        }

        return lower;
    }
};