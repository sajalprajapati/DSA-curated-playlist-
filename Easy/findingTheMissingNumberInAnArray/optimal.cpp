#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int missingNumber(vector<int> &arr){
        int n=arr.size();

        if(n==1) return arr[0];

        int xor1=0;
        int xor2=0;

        for(int i=0;i<n;i++){
            xor1=xor1^(i+1); //<----it is taking like this 0^1^2^3^4^5........
            xor2=xor2^arr[i];
        }

        return xor1^xor2;
        /*
        Time Complexity is :O(N)
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