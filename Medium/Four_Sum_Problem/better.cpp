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

        set<vector<int>> st; //this is for uniqueness and we have to sort the data to insert in it to preserve the data.


        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long,long> hashSet; //this is a hashmap...

                for(int k=j+1;k<n;k++){
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k];

                    long long remainingElementNeeded=target-sum;
                    if(hashSet.find(remainingElementNeeded)!=hashSet.end()){
                        vector<int> temp={nums[i],nums[j],nums[k],(int)remainingElementNeeded};
                        sort(temp.begin(),temp.end());

                        st.insert(temp);

                    }

                    hashSet.insert(nums[k]); // ✅ Add current number to set
                }
            }
        }
    
        vector<vector<int>> answer(st.begin(),st.end());

        return answer;
    }
};