#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution{
    public:
    int largest(vector<int>&arr){
        int sizeOfArray=arr.size();

        if(sizeOfArray==1){
            return arr[0];
        }
        else if(sizeOfArray==2 and arr[0]>arr[1]){
            return arr[0];
        }
        else if(sizeOfArray==2 and arr[1]>arr[0]){
            return arr[1];
        }

        int largest=INT_MIN;
        for(int i=0;i<sizeOfArray;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }

        return largest;
    }
};

int main(){
    Solution sol;
    int element;
    cout<<"\n enter the size of an array"<<endl;
    cin>>element;

    cout<<"\n enter the element in an array"<<endl;
    vector<int> arr;
    for(int i=0;i<element;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    int largestNumber=sol.largest(arr);
    cout<<"\n the Largest element in the array is "<<largestNumber<<endl;
}