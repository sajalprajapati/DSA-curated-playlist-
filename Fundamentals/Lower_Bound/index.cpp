#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>x or nums[i]==x){
                return i;
            }
        }


        return n;
    }
};

int main(){
    int n;
    cout<<"\n enter the size of an array"<<endl;
    cin>>n;

    vector<int> arr;
    Solution sol;
    cout<<"\n enter your element in an array"<<endl;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    int target;
    cout<<"\n enter the value we want to search"<<endl;
    cin>>target;

    int answer= sol.lowerBound(arr,target);
    cout<<"\n the value after searching the target is "<<answer;
}