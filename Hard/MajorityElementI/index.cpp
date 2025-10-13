#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size(); //size of an array

        if(n==1) return nums[0]; //it is an edge case ...

        for(int i=0;i<n;i++){
            int target=nums[i];
            int counter=1;

            for(int j=i+1;j<n;j++)
            {
               if(target==nums[j]) counter++;
            }

            if(counter>n/2){ return target;}
        }


        return -1;
    }
};