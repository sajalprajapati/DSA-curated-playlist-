#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public :

    int maximumConsecutiveOnes(vector<int> &arr){
     
        int sizeOfArray=arr.size();

        if(sizeOfArray==0) return 0;

        int consecutiveOneCount=0;
        int temporaryConsecutiveCount=0;
        for(int i=0;i<sizeOfArray;i++){
            if(arr[i]==1){
                temporaryConsecutiveCount++;
                 consecutiveOneCount=max(consecutiveOneCount,temporaryConsecutiveCount);
            }
            else{
               
                temporaryConsecutiveCount=0;
            }
        }


        return consecutiveOneCount;
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
    cout<<"\n the value of consecutive ones in our array is "<<sol.maximumConsecutiveOnes(arr);
}