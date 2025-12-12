#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int floorValue(vector<int> &nums,int x,int size){

      int floor=-1;
      int lower=0;
      int higher=size-1;

      while(lower<=higher){
        int middle=lower+(higher-lower)/2;

        if(nums[middle]==x){
          floor=nums[middle];
          return floor;
        }
        else if (nums[middle]<x){
            floor=nums[middle];
            lower=middle+1;
        }
        else if(nums[middle]>x){
            higher=middle-1;
        }
      }

      return floor;
    }

    int CeilValue(vector<int> &nums,int x,int size){

      int ceil=-1;
      int lower=0;
      int higher=size-1;

      while(lower<=higher){
        int middle=lower+(higher-lower)/2;

        if(nums[middle]>=x){
            ceil=nums[middle];
            higher=middle-1;
        }
        else{
            lower=middle+1;
        }
      }

      return ceil;
    }

   vector<int> getFloorAndCeil(vector<int> nums, int x) {
      int n=nums.size();
      int floor=floorValue(nums,x,n);
      int ceil=CeilValue(nums,x,n);
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