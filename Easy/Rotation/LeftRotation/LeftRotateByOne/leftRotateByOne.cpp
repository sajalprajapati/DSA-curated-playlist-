#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    void leftRotation(vector<int> &arr){
        int sizeOfArray=arr.size();

        if(sizeOfArray==0 || sizeOfArray==1) return;

        int temp=arr[0];

        int i=0;
        while(i<sizeOfArray-1){
            arr[i]=arr[i+1];
            i++;
        }

        arr[i]=temp;
    }
};

int main(){
    int sizeOfArray;
    cout<<"\n enter the size of an array"<<endl;
    cin>>sizeOfArray;

    cout<<"\n enter the elements in an array"<<endl;
    vector<int> arr;
    for(int i=0;i<sizeOfArray;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    Solution sol;
    sol.leftRotation(arr);
    cout<<"\n array after the rotation is "<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cout<<arr[i]<<" ";
    }
    
}