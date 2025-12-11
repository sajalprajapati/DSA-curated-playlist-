#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
   vector<int> getFloorAndCeil(vector<int> nums, int x) {
       int n=nums.size();
       vector<int> answer;
       int floor=-1;
       int ceil=-1;

      for(int i = 0; i < n; i++) {
    if (nums[i] == x) {
        floor = x;
        ceil = x;
        break; // Found exact match, no need to look further!
    }
    else if (nums[i] < x) {
        // Only update floor if this number is bigger than the previous floor
        // or if floor hasn't been set yet (-1)
        if (nums[i] > floor || floor == -1) { 
             floor = nums[i];
        }
    }
    else { // nums[i] > x
        // Only update ceil if this number is smaller than the previous ceil
        // or if ceil hasn't been set yet (-1)
        if (nums[i] < ceil || ceil == -1) {
            ceil = nums[i];
        }
    }
}

      return {floor,ceil};
    }
};

int main(){
    int n;
    cout<<"\n enter the size of an array"<<endl;
    cin>>n;

    vector<int> arr;
    cout<<"\n enter the size of an array"<<endl;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    int target;
    cout<<"\n enter the value of target"<<endl;
    cin>>target;
    Solution sol;
    vector<int> answer=sol.getFloorAndCeil(arr,target);
    for(auto it:answer){
        cout<<it<<" "<<endl;
    }
}