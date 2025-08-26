#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public :
     void movingZeroesToEnd(vector<int> &arr){
        int sizeOfArray=arr.size();

        if(sizeOfArray==0 || sizeOfArray==1){return;}

        int i=0;
        for(int j=0;j<sizeOfArray;j++){
            if(arr[j]!=0){
                swap(arr[i],arr[j]);
                i++;
            }
        }
        
        //we will printing the original array here..
        for(int i=0;i<sizeOfArray;i++){
            cout<<arr[i]<<" ";
        }

     }

};


int main(){
    int n;
    cout<<"\n enter the size of an array";
    cin>>n;

    vector<int> arr;
    cout<<"\n enter the element in an array";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

   Solution sol;
   sol.movingZeroesToEnd(arr);
}