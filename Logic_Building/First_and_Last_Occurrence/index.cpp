#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int lowerBound(vector<int> &nums,int target,int n){
        
        int lower=0;
        int higher=n-1;
        int answer=-1;
        while(lower<=higher){
            int middle=lower+(higher-lower)/2;

            if(nums[middle]>=target){
              answer=middle;
              higher=middle-1;
            }
            else{
                lower=middle+1;
            }
        }

        return answer;
    }

    int upperBound(vector<int> &nums,int target,int n){
        int lower=0;
        int higher=n-1;
        int answer=-1;
        while(lower<=higher){
            int middle=lower+(higher-lower)/2;

            if(nums[middle]>target){
              answer=middle;
              higher=middle-1;
            }
            else{
                lower=middle+1;
            }
        }

        return answer;
    }
    vector<int> searchRange(vector<int> &nums, int target) {
     int lbIndex=lowerBound(nums,target,nums.size());
     if(lbIndex==nums.size()||nums[lbIndex]!=target){
        return {-1,-1};
     }
     int ubIndex=upperBound(nums,target,nums.size());       
     return {lbIndex,ubIndex-1};
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

