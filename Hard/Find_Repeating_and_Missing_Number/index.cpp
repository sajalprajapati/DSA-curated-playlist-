#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
       
        int n = nums.size();
        vector<int> mpp(n + 1, 0);   // use n+1 because numbers are from 1 to n
        int repeating = -1;
        int missing = -1;

        // Count frequency of each number
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }

        cout << "\nThe elements in the map are:\n";
        // print from 1 because index 0 is useless here
        for (int i = 1; i <= n; i++) {
            cout << "mpp[" << i << "] = " << mpp[i] << endl;
        }
        cout << endl;

        // Find repeating and missing
        for (int i = 1; i <= n; i++) {
            if (mpp[i] == 2) repeating = i;
            if (mpp[i] == 0) missing = i;

            if (missing != -1 && repeating != -1)
                break;
        }

        return {repeating, missing};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 5, 4, 1, 1};
    vector<int> ans = sol.findMissingRepeatingNumbers(nums);
    cout << "Repeating: " << ans[0] << ", Missing: " << ans[1] << endl;
    return 0;
}
