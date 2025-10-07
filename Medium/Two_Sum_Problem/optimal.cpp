#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    /* Function to find two indices in the array `nums`
       such that their elements sum up to `target`.
    */
    vector<int> twoSum(vector<int>& nums, int target) {
        // Size of the nums vector
        int n = nums.size(); 
        
        // Vector to store indices of two numbers
        vector<int> ans; 
        
        vector<vector<int>> eleIndex;
        for(int i = 0; i < nums.size(); i++){
            eleIndex.push_back({nums[i], i});
        }
        
        //Sort by first element in ascending order
        sort(eleIndex.begin(), eleIndex.end(), [](const vector<int>& a, const vector<int>& b) {
           return a[0] < b[0]; 
        });

        /* Two pointers: one starting 
        from left and one from right*/
        int left = 0, right = n - 1; 

        while (left < right) {
             /* Calculate sum of elements
             at left and right pointers*/
            int sum = eleIndex[left][0] + eleIndex[right][0];

            if (sum == target) {
                
                /* If sum equals target, 
                store indices and return*/
                ans.push_back(eleIndex[left][1]);
                ans.push_back(eleIndex[right][1]);
                return ans;
                
            } else if (sum < target) {
                
                /* If sum is less than target, 
                move left pointer to the right*/
                left++;
                
            } else {
                
                /* If sum is greater than target,
                move right pointer to the left*/
                right--;
                
            }
        }

        // If no such pair found, return {-1, -1}
        return {-1, -1};
    }
};

int main() {
    vector<int> nums = {2, 6, 5, 8, 11};
    int target = 14;

    // Create an instance of Solution class
    Solution sol;

    // Call the twoSum method from Solution class
    vector<int> ans = sol.twoSum(nums, target);

    // Print the result
    cout << "Indices of the two numbers that sum up to " << target << " are: [" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}
