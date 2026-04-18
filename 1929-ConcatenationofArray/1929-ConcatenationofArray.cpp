// Last updated: 18/04/2026, 23:35:10
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int length = nums.size();
5        vector<int> res(length * 2);
6
7        for (int i = 0; i < length; i++) {
8            res[i] = nums[i];
9            res[i + length] = nums[i];
10        }
11
12        return res;
13    }
14};