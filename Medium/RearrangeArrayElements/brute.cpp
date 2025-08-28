#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{
    public:
    void rearrangingArrayElements(vector<int>&arr){
        int n=arr.size();
        vector<int> positiveArray;
        vector<int> negativeArray;
        vector<int> answer;

        for(int i=0;i<n;i++){ // O(N)
            if(arr[i]>0){
              positiveArray.push_back(arr[i]);
            }else{
              negativeArray.push_back(arr[i]);
            }
        }
 
        int i=0;
        int j=0;
        while(i<positiveArray.size() and j<negativeArray.size()){ //O(N)
            answer.push_back(positiveArray[i]);
            answer.push_back(negativeArray[j]);
            i++;
            j++;
        }
        
        for(int i=0;i<answer.size();i++){ //O(N)
            arr[i]=answer[i];
        }

       /*
       Time Complexity : O(N)+O(N)+O(N) ~ 3*O(N)
       Space Complexity: O(N)
       */
    }
};
int main(){
    int n;
    cout<<"\n enter the value of n";
    cin>>n;

    cout<<"\n Enter the elements in an array"<<endl;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    Solution sol;
    sol.rearrangingArrayElements(arr);

    cout<<"\n array after arranging the element "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}