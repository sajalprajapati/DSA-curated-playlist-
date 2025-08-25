#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void leftRotateByK_HelperFunction(vector<int> &arr){

        int temp=arr[0];
        int i=0;
        while(i<arr.size()-1){
            arr[i]=arr[i+1];
            i++;
        }

        arr[i]=temp;
    }
    void leftRotateByK(vector<int> &arr,int k){
       int sizeOfarray=arr.size(); // O(n)

       if(sizeOfarray==0 || (sizeOfarray==1 && k==1)){ // 0(1)
        return;
       }
       k=k%sizeOfarray;

       while(k--){ //O(K*N)
        leftRotateByK_HelperFunction(arr);
       }
    }
    /*
    Time Complexity is : O(K*N);
    Space Complexity is :O(1);
    */
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
 
    int k;
    cout<<"\n enter how many times do you want to rotate an array"<<endl;
    cin>>k;

    Solution sol;
    sol.leftRotateByK(arr,k);
    
    cout<<"\n array elements are "<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cout<<arr[i]<<" ";
    }
}