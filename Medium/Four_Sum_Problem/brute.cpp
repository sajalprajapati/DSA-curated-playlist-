#include<iostream>
#include<vector>
#include<iomanip>
#include<set>
using namespace std;
class Solution
{
    public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<4) return {};

        set<vector<int>> st;

        for(int i=0;i<n;i++){

            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int t=k+1;t<n;t++){
                        if(nums[i]+nums[j]+nums[k]+nums[t]==target){
                          vector<int> temp={nums[i],nums[j],nums[k],nums[t]};
                          sort(temp.begin(),temp.end());
                          st.insert(temp);
                        }
                    }
                }
            }
        }
    
        vector<vector<int>> answer(st.begin(),st.end());

        return answer;
    }
};