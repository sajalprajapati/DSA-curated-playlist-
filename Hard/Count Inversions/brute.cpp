#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
   long long int numberOfInversions(vector<int> nums) {
        long long int size=nums.size();
        long long int count=0;

        for(long long int i=0;i<size;i++){
            for(long long int j=i+1;j<size;j++){
                if(nums[i]>nums[j] & i<j){
                    count++;
                }
            }
        }

        return count;
    }
};