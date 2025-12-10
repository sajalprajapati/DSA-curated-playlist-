#include<iostream>
#include<vector>
using namespace std;

using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size(); 
        int low = 0, high = n - 1;
        int ans = n;

        // Applying Binary Search Algorithm
        while (low <= high) {
            int mid = (low + high) / 2;

            /* If mid element is greater than 
               or equal to target, update ans 
               and search the left half */
            if (nums[mid] >= target) {
                ans = mid;
                high = mid - 1;
            }
            // Otherwise, search the right half
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    // Create an instance of the Solution class
    Solution sol;

    // Find the insertion index
    int ind = sol.searchInsert(nums, target);

    cout << "The index is: " << ind << "\n";
    return 0;
}
   