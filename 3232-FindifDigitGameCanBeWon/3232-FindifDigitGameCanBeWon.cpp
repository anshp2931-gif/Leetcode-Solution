// Last updated: 23/04/2026, 09:34:51
1class Solution {
2public:
3    bool canAliceWin(vector<int>& nums) {
4        int sumSingle = 0;
5        int sumDouble = 0;
6
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] <= 9) {
9                sumSingle += nums[i];
10            } else {
11                sumDouble += nums[i];
12            }
13        }
14
15        return sumSingle != sumDouble;
16    }
17};