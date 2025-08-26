#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int missingNumber(vector<int> &arr){
        int n=arr.size();

        if(n==1) return arr[0];

        int sum1=0;
        int sum2=0;

        for(int i=0;i<n;i++){
            sum1+=arr[i];
        }


        for(int i=0;i<n+1;i++){
            sum2=sum2+i;
        }

        return sum2-sum1;

        /*
        Time Complexity is :2O(N)
        Space Complexity is : O(1)
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