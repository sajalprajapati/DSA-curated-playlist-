#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;

    void twoSum(int target,vector<int> &nums,int i,int j){
        while(i<j){
            if(nums[i]+nums[j]>target){
                j--;
            }
            else if (nums[i]+nums[j]<target){
                i++;
            }
            else{
                result.push_back({-target,nums[i],nums[j]});
                while(i<j && nums[i]==nums[i+1])i++;
                while(i<j && nums[j]==nums[j-1])j++;

                
                i++;
                j--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
      //this problem can be solved by dissolving it in two sum problem if we close at it.
      /*
       n1+n2+n3=0;
       n2+n3= -n1;
      */

      int n=nums.size();
      //since we have to find the triplet therefore there is no sense if there is two element or one element;
      if(n<3) return {};

      sort(nums.begin(),nums.end());

      for(int i=0;i<n-2;i++){
        if(i>0 && nums[i]==nums[i-1])continue;

        int n1=nums[i];
        int target=-n1;

        twoSum(target,nums,i+1,n-1);
      }   

      return result;
    }
};