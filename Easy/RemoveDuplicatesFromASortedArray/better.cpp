#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution
{
    public :
     int removingDuplicatesFromAnArray(vector<int> &arr){
        int sizeOfArray=arr.size();  //O(1)

        if(sizeOfArray==1){return 1;} // O(1)

        int i=0;

        for(int j=i+1;j<sizeOfArray;j++){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
                
            }
        }

        return i+1;;
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
   cout<<"the value of unique element we get is "<<sol.removingDuplicatesFromAnArray(arr)<<endl;

   cout<<endl;
   for(int i=0;i<sol.removingDuplicatesFromAnArray(arr);i++){
    cout<<arr[i]<<" ";
   }
   
}