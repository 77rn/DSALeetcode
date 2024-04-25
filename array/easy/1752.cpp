//check if an array is sorted and rotated

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        for (int i=1;i<nums.size();i++){
            if (nums[i-1]>nums[i]){
                count++;
            }
        }
        if (nums[nums.size()-1]>nums[0]){
        count++;
        }
        if (count<=1){
            return true;
        }
        return false;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {3,4,5,1,2};
    cout<<sol.check(nums);
    return 0;
}