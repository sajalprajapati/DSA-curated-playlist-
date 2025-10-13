#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        int count = 0;
        int element = 0;

        // Step 1: Find possible candidate
        for (int i = 0; i < n; i++) {
            if (count == 0) {
                element = nums[i];
                count = 1;
            } 
            else if (nums[i] == element) {
                count++;
            } 
            else {
                count--;
            }
        }

        // Step 2: Verify the candidate
        int freq = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == element) freq++;
        }

        if (freq > n / 2) return element;
        return -1;
    }
};
