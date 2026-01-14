#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int> &arr)  {
      int n=arr.size();
      int lower=0;
      int higher=n-1;

      //edge case :
      if(arr[lower]<arr[higher]) return arr[lower];

      while(lower<higher){
        int middle=lower+(higher-lower)/2;

        if(arr[middle]>arr[higher]){
            lower=middle+1;
        }else{
            higher=middle;
        }
      }

      return arr[lower];
    }
};