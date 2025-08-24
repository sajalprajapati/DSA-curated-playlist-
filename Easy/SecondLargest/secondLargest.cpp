#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int secondLargest(vector<int> &arr){
        int sizeOfArray=arr.size();

        if(sizeOfArray==1){ return -1;}

        int largest=arr[0];
        int SecondLargest=-1;

        for(int i=1;i<sizeOfArray;i++){
            if(arr[i]>largest){
                SecondLargest=largest;
                largest=arr[i];
            }
            else if(arr[i]>SecondLargest && arr[i]!=largest){
                SecondLargest=arr[i];
            }
        }

        return SecondLargest;
    }
};

int main(){
    int sizeOfArray;
    cout<<"\n enter the size of an array"<<endl;
    cin>>sizeOfArray;

    cout<<"\n enter the element in an array"<<endl;
    vector<int> arr;
    for(int i=0;i<sizeOfArray;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    Solution sol;
    int secondLargestElement=sol.secondLargest(arr);

    if(secondLargestElement==-1){
        cout<<"\n there is no second largest present ";
    }
    else {
        cout<<"\n there is second largest element that is "<<secondLargestElement;
    }

    return 0;
}