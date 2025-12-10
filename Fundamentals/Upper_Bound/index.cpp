#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int n=nums.size();

        /*
        We need to find the element plus the index that is just greater than my target value ....
        this help in creating range which maintain the requirement of lowerbound and upper bound ...
        */

        for(int i=0;i<n;i++){
            if(nums[i]>x){
                return i;
            }
        }

        return n;
    }
};

int main()
{
    int size;
    cout<<"\n enter the size of an array"<<endl;
    cin>>size;

    vector<int> arr;
    cout<<"\n enter the elements in an array"<<endl;
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    Solution sol;
    int target;
    cout<<"\n enter the value of target";
    cin>>target;
    cout<<"\n the element index that is strictly greater than my expected target is "<<sol.upperBound(arr,target);

}