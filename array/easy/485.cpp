//problem: Max Consecutive Ones

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //vector<int> a;
        int count=0;
        int maxx=count;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                //a.push_back(count);
                //maxx=max(maxx,count);
                count=0;
                continue;
            }
            count++;
            maxx=max(maxx,count);
        }
        return maxx;
        
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,1,0,1,1,1};
    cout<<sol.findMaxConsecutiveOnes(nums);
    return 0;
}