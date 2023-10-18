// https://leetcode.com/problems/running-sum-of-1d-array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int l = nums.size();

        vector<int> runningSums(l);

        int run = 0;
        for(int i=0; i < l; i++){
            run += nums[i];
            runningSums[i] = run;
        }

        return runningSums;
    }
};