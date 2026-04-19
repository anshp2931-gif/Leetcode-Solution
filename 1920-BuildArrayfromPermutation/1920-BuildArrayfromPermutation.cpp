// Last updated: 19/04/2026, 17:01:59
1class Solution {
2public:
3    vector<int> buildArray(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> res(n);
6        // we make vector name res for size n
7
8        for (int i = 0; i < n; i++) {
9            res[i] = nums[nums[i]]; 
10            // if i=0; nums[0] is 0 and nums[0] is 0. So we get 0 in 0th index
11            // now if i=1;nums[1] is 2 and nums[2] is 1. So we get 1 in 1st index
12            // as loop will run 
13        }
14
15        return res;
16    }
17};