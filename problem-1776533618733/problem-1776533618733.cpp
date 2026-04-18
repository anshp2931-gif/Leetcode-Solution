// Last updated: 18/04/2026, 23:03:38
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int length=nums.size();
5        vector <int> res(length*2,0);
6        for(int i=0;i<length;i++){
7            res[i]=nums[i];
8            res[i+length]=nums[i];
9        }
10        return res;
11    }
12};