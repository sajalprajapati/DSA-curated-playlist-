#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int missingNumber(vector<int> &arr){
        int n=arr.size();

        if(n==1) return arr[0];

        vector<int> brr(n+1,0);

        for(int i=0;i<n;i++){
            brr[arr[i]]++;
        }

        for(int i=0;i<n+1;i++){
            if(brr[i]==0){
                return i;
            }
        }

        /*
        Time Complexity is :2O(N)
        Space Complexity is : O(N)
        */
    }
};

int main(){
   int n;
   cout<<"\n  enter the size of an array"<<endl;
   cin>>n;

   cout<<"\n enter the elements in an array"<<endl;
   vector<int> arr;
   for(int i=0;i<n;i++){
    int element;
    cin>>element;
    arr.push_back(element);
   }

   Solution sol;
   cout<<"\n the number that is missing "<<sol.missingNumber(arr);
}