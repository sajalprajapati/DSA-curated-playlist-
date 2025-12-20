#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int search(vector<int> &nums, int target) {
       
        /*-----------------------------------------------------------------------------------------------------------------*/
        /*-------------------------------FINDING THE PIVOT POINT FIRST USING THE BINARY SEARCH-----------------------------*/
        //First approach is we are finding the pivot value .From which index does our array is actually rotated.
        int lower=0;
        int higher=nums.size()-1;
        while(lower<higher){
            int middle=lower+(higher-lower)/2;

            if(nums[middle]>nums[higher]){
              lower=middle+1;
            }
            else{
                //here we are not including the condition of equal that is why we are higher always comes to middle position.
                higher=middle;
            }
        }

         /*-----------------------------------------------------------------------------------------------------------------*/
       

         /*
         Since now we have founded the pivot point that is lower now we will decide which part of array to go for ..right or left.......
         */
        int pivot=lower; //this is storing our pivot index;

        /* First we are resetting the lower and higher value ,we will not re-declare the variable with same name bad practise */
        lower=0;
        higher=nums.size()-1;

        if(target>=nums[pivot] && target<=nums[higher]){ //<-------- this is the condition for searching in the right sorted array .....
          lower=pivot;
        }
        else{ //<-------- this is the condition for searching in the left sorted array....
            higher=pivot-1;
        }





        /*Now we will apply same binary search understand ........
        */
       while(lower<=higher){
        int middle=lower+(higher-lower)/2;

        if(nums[middle]==target){
            return middle;
        }

        else if(nums[middle]>target){
            higher=middle-1;
        }
        else{
            lower=middle+1;
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