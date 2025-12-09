#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        
        int n=nums.size();
        
        /*
        since we are finding the smallest and first .
        I again say, we are finding the smallest & first....
        Understand what I mean...
        therefore it looks like arr[i]>=x
        */

        int low=0,high =n-1;
        int answer=n;

        while(low<=high){
            int middle=low+(high-low)/2;

            if(nums[middle]>=x){
                answer=middle;
              high=middle-1;
            }
            else{
                low=middle+1;
            }
        }

        return answer;
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