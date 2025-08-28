#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{
    public:
    void rearrangingArrayElements(vector<int>&arr){
        int n=arr.size();
        int oddIndicator=1;
        int evenIndicator=0;
        vector<int> answer;

        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                answer[evenIndicator]=arr[i];
                evenIndicator+=2;
            }
            else{
                answer[oddIndicator]=arr[i];
                oddIndicator+=2;
            }
        }

         for(int i=0;i<answer.size();i++){ //O(N)
            arr[i]=answer[i];
        }

       /*
       Time Complexity : O(N)+O(N) ~ 2*O(N)
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