#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> mpp;//current situation for dikayega
        int n=nums.size();
 
       for(int i=0;i<n;i++){
        int number=nums[i];//<---this is the number we have in an array
        int howMuch_Need=target-number;//<----itne ki need hai taki mera target ban jaye ...

        if(mpp.find(howMuch_Need)!=mpp.end()){
            return {mpp[howMuch_Need],i};
        }

        mpp[number]=i;
       }

       return {-1,-1};
    }
};