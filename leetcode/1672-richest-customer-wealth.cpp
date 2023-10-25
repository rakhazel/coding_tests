// https://leetcode.com/problems/richest-customer-wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum = 0;
        for(int i=0; i < accounts.size(); i++){
            vector<int>& a = accounts[i];
            int account_sum = 0;
            for(int j=0; j < a.size(); j++){
                account_sum += a[j];
            }

            if(account_sum > max_sum){
                max_sum = account_sum;
            }
        }
        return max_sum;
    }
};