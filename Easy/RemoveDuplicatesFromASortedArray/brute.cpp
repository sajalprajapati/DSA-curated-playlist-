#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution
{
    public :
     int movingZeroesToEnd(vector<int> &arr){
        int sizeOfArray=arr.size();  //O(1)

        if(sizeOfArray==1){return 1;} // O(1)

        set<int> st; //this will just store the element in unique ways .No duplicate... O(N)

        for(auto element:arr){
            st.insert(element); //O(log M) where M= current element  and this is of just insert ,we are running it for N times
            //therefore time complexity is O(N * log N);
        }


        int k=st.size(); //O(1)
        int j=0;
        for(auto elementInSet:st){ //O(N)
           arr[j++]=elementInSet;
        }
  
        /*
        Time Complexity is : O(N*log N)+O(N) ~ O(N*log N);
        Space Complexity is : O(N);
        */
        return k;
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
   cout<<"the value of unique element we get is "<<sol.movingZeroesToEnd(arr)<<endl;

   cout<<endl;
   for(int i=0;i<sol.movingZeroesToEnd(arr);i++){
    cout<<arr[i]<<" ";
   }
   
}