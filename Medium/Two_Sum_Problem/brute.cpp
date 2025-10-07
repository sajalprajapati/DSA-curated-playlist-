#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int n=nums.size();

         vector<int> answer(0); //O(1)

         for(int i=0;i<n;i++){//O(N)
            for(int j=i;j<n;j++){ //O(N)
                if(nums[i]+nums[j]==target){ //O(1)
                    answer.push_back(i);//O(1)
                    answer.push_back(j);//O(1)
                    break;//O(1)
                }
            }
         }

         return answer;//O(1)
    }

    /*
    Total time complexity is O(N*N)
    Total space complexity is O(1);
    */
};
int main(){
    int n;
    cout<<"\n enter the size of an array";
    cin>>n;
    vector<int> vec;
    cout<<"\n enter the elements in the array"<<endl;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        vec.push_back(element);
    }
    int target;
    cout<<"\n enter the value of target"<<endl;
    cin>>target;

    Solution sol;
    vector<int> answer=sol.twoSum(vec,target);

    for(auto ans:answer){
        cout<<ans<<" "<<endl;
    }

    return 0;
}