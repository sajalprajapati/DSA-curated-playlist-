#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int firstOccurence(vector<int> &nums, int target, int size) {
        int lower = 0;
        int higher = size - 1;
        int firstOccurence = -1;

        while (lower <= higher) {
            int middle = lower + (higher - lower) / 2;

            if (nums[middle] == target) {
                firstOccurence = middle;
                // We found a match, but we want the FIRST one, so we look LEFT.
                higher = middle - 1; // <--- FIX: changed from 'lower - 1'
            }
            else if (nums[middle] > target) {
                // Middle is too big, look LEFT
                higher = middle - 1; // <--- FIX: changed from 'lower = middle + 1'
            }
            else {
                // Middle is too small, look RIGHT
                lower = middle + 1;  // <--- FIX: changed from 'higher = middle - 1'
            }
        }
        return firstOccurence;
    }

    int lastOccurence(vector<int> &nums, int target, int size) {
        int lower = 0;
        int higher = size - 1;
        int lastOccurence = -1;

        while (lower <= higher) {
            int middle = lower + (higher - lower) / 2;

            if (nums[middle] == target) {
                lastOccurence = middle;
                // We found a match, but we want the LAST one, so we look RIGHT.
                lower = middle + 1; // This was already correct in your code!
            }
            else if (nums[middle] > target) {
                higher = middle - 1; // This was correct
            }
            else {
                lower = middle + 1;  // This was correct
            }
        }
        return lastOccurence;
    }

    vector<int> searchRange(vector<int> &nums, int target) {
        // Handle empty array edge case just in case
        if (nums.empty()) return {-1, -1};

        int firstlb = firstOccurence(nums, target, nums.size());
        
        // If first occurrence isn't found, no need to search for last
        if (firstlb == -1) {
            return {-1, -1};
        }
        
        int lastLb = lastOccurence(nums, target, nums.size());
        return {firstlb, lastLb};
    }
};

int main(){
    int n;
    cout<<"\n enter the size of an array"<<endl;
    cin>>n;

    vector<int> arr;
    cout<<"\n enter the elements in an array"<<endl;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    
    cout<<"\n enter the value of a target";
    int target;
    cin>>target;
    Solution sol;
    vector<int> answer=sol.searchRange(arr,target);

    cout<<"\n the answer is "<<endl;
    for(auto it:answer){
        cout<<it<<" ";
    }


}

