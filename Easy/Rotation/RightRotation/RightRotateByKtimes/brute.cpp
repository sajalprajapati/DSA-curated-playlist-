#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void rightRotateByK_HelperFunction(vector<int> &arr){

       int sizeOfArray=arr.size();
       int temp=arr[sizeOfArray-1];

       for(int i=sizeOfArray-1;i>0;i--){
         arr[i]=arr[i-1];
       }

       arr[0]=temp;
    }


    void rightRotateByK(vector<int> &arr,int k){
       int sizeOfarray=arr.size(); // O(n)

       if(sizeOfarray==0 || (sizeOfarray==1 && k==1)){ // 0(1)
        return;
       }
       k=k%sizeOfarray;

       while(k--){ //O(K*N)
        rightRotateByK_HelperFunction(arr);
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
    sol.rightRotateByK(arr,k);
    
    cout<<"\n array elements are "<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cout<<arr[i]<<" ";
    }
}