#include<iostream>
#include<vector>
using namespace std ;
class Solution {
public:
    int floorSqrt(int n)  {
      
      /*
      why we are applying lower bound it should be clear ?

      Point Number one :
      if we go linearly then we have to check every number from 1 till the number we 
      get such that ( squaring of this x number is not greater than n).....

      For instance say we have to find the square root of the number 50
      so n=1 -> 1*1=1 => 1==50 (no)=> 1<50(1 is our possible square root(possibly))
         n=2 -> 2*2=4 => 4==50 (no)=> 4<50(2 is now our possible square root)
         .
         .
         .
         .
         .
         n=8 -> 8*8=64=> 64==50 (no) and 64<50(no)....

         thus number just less than 8 that is '7' is our answer ....
         this is linear search square rooot .Suppose we have to find the square root of 
         '1,00,000' so what would you do ..this is absolutely non-sense......

         therefore we closely look there is pattern we are going from 1 to x(say particular number )
         staright line that is linear therfore we can apply binary search that is why we are 
         applying it directly .Now why to apply lower bound ...look closely in the linear search
         the patter we are observing understand ....
         we are looking for the just first number either equal to the our 'n' or just greater than
         it because we will just return the number just less than it ..Understand therefore ...
      */

     if (n == 0 || n == 1) return n; // Handle base cases

    long long start = 1, end = n; // Use long long to prevent overflow
    int ans = 0;

    while (start <= end) {
        long long mid = start + (end - start) / 2;
        long long sqr = mid * mid;

        if (sqr == n) {
            return mid; // Perfect square found
        } 
        else if (sqr < n) {
            // This is a valid floor candidate, store it
            ans = mid;
            start = mid + 1; // Try to find a larger value
        } 
        else {
            end = mid - 1; // Value is too high
        }
    }
    return ans;
    }
};
int main(){
    
    int number;
    cout<<"\n enter the number of which the square needs to be find ."<<endl;
    cin>>number;
    Solution sol;
    
    cout<<"\n the square root of the number is "<<sol.floorSqrt(number);
}