#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public :
     void movingZeroesToEnd(vector<int> &arr){
        int sizeOfArray=arr.size();

        if(sizeOfArray==0 || sizeOfArray==1){return;}

        vector<int> temp;
        int countOfZeroes=0;

        for(int i=0;i<sizeOfArray;i++){ // <----O(N)
            if(arr[i]==0){ // O(1)
                countOfZeroes++; //O(1)
            }
            else{
                temp.push_back(arr[i]);//O(1)
            }
        }

        while(countOfZeroes--){ //O(countOfZeroes)
            temp.push_back(0); // O(1);
        }

        //temp = [ 1,2,3,4,0,0];
        //we will be pushing it to original array...
        for(int i=0;i<sizeOfArray;i++){ //O(N)
            arr[i]=temp[i]; //O(1)
        }

        //we will printing the original array here..
        for(int i=0;i<sizeOfArray;i++){
            cout<<arr[i]<<" ";
        }
  
         /*
         Time Complexity is : O(N)+O(1)+O(1)+O(1)+O(N)+O(N) => O(N)+O(N)+O(N) = 3*O(N).
         Space Complexity is : O(N);
         */
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