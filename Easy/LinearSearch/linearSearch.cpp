#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int linearSearch(vector<int> &arr,int target){
      
        int sizeOfArray=arr.size();
        
        if(arr[0]==target and sizeOfArray==1){
            return 1;
        }

        //traversing through the array ...
        //let's do a thought experiment...
        /*Imagine you give a task to child to match a color with color present inside the array.
        What child will do ,it will take one color one by one and try to match it and return/indicate the number where it found
        exact matching of the color .Same experiment logic we are applying here....
        */

         /*
         suppose we will be having arr=[2,3,4,5,2];
         */

         
        for(int i=0;i<sizeOfArray;i++){
            if(arr[i]==target ){
                return i;
            }
        }

        return -1;
    }
};


int main(){
    Solution sol;
    vector<int> arr={34,23,24,35,2,3};
    int target=23;
    int answer=sol.linearSearch(arr,target);

    if(answer==-1){
        cout<<"We have  not found the target in the array"<<endl;
    }
    else{
        cout<<"\n the element is found at the index number of "<<answer<<" "<<endl;
    }
}