#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int search(vector<int> &nums, int target) {
       
       int start=0;
       int end=nums.size()-1;

       while(start<=end){
        int middle=start+(end-start)/2;

        if(nums[middle]==target) return middle;

        //since we haven't found our target ,now we have to decide which part to go either left search space or right search space .

        if(nums[start]<=nums[middle]){
            if(nums[start]<=target && target<=nums[middle]){
              end=middle-1;
            }
            else{
                start=middle+1;
            }
        }
        else {
           if(target>=nums[middle]&& target<=nums[end]){
            start=middle+1;
           }
           else{
            end=middle-1;
           }
        }
       }

       return -1;
    }
};

int main(){
    int sizeOfarray;
    cout<<"\n enter the size of an array"<<endl;
    cin>>sizeOfarray;

    vector<int> arr;
    cout<<"\n enter the elements in your array"<<endl;
    for(int i=0;i<sizeOfarray;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

   int target;
   cout<<"\n enter the target value need to be found";
   cin>>target;

   Solution sol;
   int answer=sol.search(arr,target);

   cout<<"\n Right now we are printing the pivot value"<<answer;
}